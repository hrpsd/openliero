#include "ScreensaverMenu.hpp"

#include "text.hpp"
#include "arrayEnumBehavior.hpp"

#include "../gfx.hpp"
#include "../sfx.hpp"
#include "../filesystem.hpp"

#include <windows.h>
#include <string>
#pragma GCC diagnostic ignored "-Wwrite-strings"

HKEY OpenKey (HKEY hRootKey, char strKey[]) {
    HKEY hKey;
    
    LONG nError = RegOpenKeyEx (hRootKey, strKey, 0, KEY_ALL_ACCESS, &hKey);
    
	if (nError == ERROR_FILE_NOT_FOUND) {
        RegCreateKeyEx (hRootKey, strKey, 0, NULL, 0, KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    return hKey;
}
 
/*void SetVal (HKEY hKey, LPCTSTR lpValue, const char * data, int lol) {
    RegSetValueEx (hKey, lpValue, 0, REG_SZ, (LPBYTE)data, lol);
}*/

void ScreensaverMenu::ReadSettings() {
	HKEY handler = OpenKey(HKEY_CURRENT_USER, "Software\\OpenLiero\\Screensaver");
			
	std::string result = std::string(1024, 0);
	DWORD size  = result.size();
	DWORD Type = REG_SZ;

	if (RegQueryValueExA(handler,
						"PlaySounds",
						NULL,
						&Type,
						(LPBYTE)&result[0],
						&size ) == ERROR_FILE_NOT_FOUND)
	{
		gfx.settings->playSounds = false;
	} else {
		gfx.settings->playSounds = result[0] == '1';
	}

	result = std::string(1024, 0);
	size  = result.size();
	
	if (RegQueryValueExA(handler,
						"NumWorms",
						NULL,
						&Type,
						(LPBYTE)&result[0],
						&size ) == ERROR_FILE_NOT_FOUND)
	{
		gfx.settings->numWorms = 4;
	} else {
		gfx.settings->numWorms = std::stoi(result);
	}

	RegCloseKey(handler);
}

ScreensaverMenu::ScreensaverMenu(int x, int y)
	: Menu(x, y)
	, paletteColor(0)
{
}

ItemBehavior* ScreensaverMenu::getItemBehavior(Common& common, MenuItem& item)
{
	ReadSettings();
	
	switch(item.id)
	{
		case PlaySounds:
		{
			return new BooleanSwitchBehavior(common, gfx.settings->playSounds, [](bool v) {
				gfx.settings->playSounds = v;
				HKEY handler = OpenKey(HKEY_CURRENT_USER, "Software\\OpenLiero\\Screensaver");
				RegSetValueEx (handler, "PlaySounds", 0, REG_SZ, (LPBYTE)(v ? "1" : "0"), 1);
				RegCloseKey(handler);
			 });
		}
		case NumWorms:
		{
			return new IntegerBehavior(common, gfx.settings->numWorms, 2, 8, 1, false, [](int v) {
				HKEY handler = OpenKey(HKEY_CURRENT_USER, "Software\\OpenLiero\\Screensaver");
				RegSetValueEx (handler, "NumWorms", 0, REG_SZ, (LPBYTE)toString(v).c_str(), 1);
				RegCloseKey(handler);
			});
		}
		default:
			return Menu::getItemBehavior(common, item);
	}
}

void ScreensaverMenu::onUpdate()
{
}

void ScreensaverMenu::drawItemOverlay(Common& common, MenuItem& item, int x, int y, bool selected, bool disabled)
{
	/*if(item.id == PaletteSelect) //Color settings
	{
		int w = 30;
		int offsX = 44;

		drawRoundedBox(gfx.playRenderer.bmp, x + offsX, y, selected ? 168 : 0, 7, w);
		fillRect(gfx.playRenderer.bmp, x + offsX + 1, y + 1, w + 1, 5, paletteColor);
	}*/
}
