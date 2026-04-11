#include <SDL.h>

#include "gfx.hpp"
#include "sfx.hpp"
#include "game.hpp"
#include "viewport.hpp"
#include "worm.hpp"
#include "reader.hpp"
#include "filesystem.hpp"
#include "text.hpp"
#include "keys.hpp"
#include "constants.hpp"
#include "math.hpp"
#include "console.hpp"

#include <ctime>
#include <exception>
#include <gvl/math/cmwc.hpp>

int InstancesRunning __attribute__((section(".oneinst"), shared)) = 0;

int gameEntry(int argc, char* argv[])
try
{
	// TODO: Better PRNG seeding
	gfx.rand.seed(Uint32(std::time(0)));

	bool tcSet = false;
	bool showScreensaverConfig = (argc == 1); //Show the settings screen if launching with no switch
	HWND windowHandle = NULL;

	std::string tcName;
	std::string configPath; // Default to current dir

	for(int i = 1; i < argc; ++i)
	{
		if (std::strncmp(argv[i], "/s", 2) == 0)
		{
			//Run and Display
		}
		else if (std::strncmp(argv[i], "/c", 2) == 0)
		{
			//Show the settings screen			
			showScreensaverConfig = true;
		}
		else if (std::strcmp(argv[i], "/p") == 0)
		{
			//System settings panel thumb video, abort if other instance is running
			CreateMutexA(0, 1, "Global\\LieroScreensaverPreviewMutex");
    		if (GetLastError() != ERROR_ALREADY_EXISTS)
			{
				windowHandle = (HWND)std::stoull(argv[i + 1]);
			}
			else {
				return 0;
			}
		}
	}

	tcName = "openliero";
	tcSet = true;

	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER);

	initKeys();

	precomputeTables();

	gfx.loadMenus();

	
	gfx.init();
	gfx.setConfigPath(configPath);

	FsNode configNode(gfx.getConfigNode());

	if (!gfx.loadSettings(configNode / "Setups" / "liero.cfg"))
	{
		/*if (!gfx.loadSettingsLegacy(configNode / "LIERO.DAT"))
		{
			gfx.settings.reset(new Settings);
			gfx.saveSettings(configNode / "Setups" / "liero.cfg");
		}*/
	}

	gfx.settings->screensaverConfig = showScreensaverConfig;
	gfx.settings->fullscreen = !showScreensaverConfig;
	
	if (tcSet)
		gfx.settings->tc = tcName;

	// TC loading
	FsNode lieroRoot(configNode / "TC" / gfx.settings->tc);
	std::shared_ptr<Common> common(new Common());
	common->load(std::move(lieroRoot));
	gfx.common = common;
	gfx.playRenderer.loadPalette(*common); // This gets the palette from common

	gfx.setVideoMode(windowHandle);
	sfx.init();

	gfx.mainLoop();

	//gfx.settings->save(configNode / "Setups" / "liero.cfg", gfx.rand);
	
	sfx.deinit();
	SDL_Quit();

	return 0;
}
catch(std::exception&)
{
	SDL_Quit();
	throw;
}
