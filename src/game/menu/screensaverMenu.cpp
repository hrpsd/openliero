#include "ScreensaverMenu.hpp"

#include "arrayEnumBehavior.hpp"

#include "../gfx.hpp"
#include "../sfx.hpp"
#include "../filesystem.hpp"

#include <windows.h>
#include <string>
#pragma GCC diagnostic ignored "-Wwrite-strings"

using namespace std;

namespace std {
	typedef basic_string<TCHAR> _tstring;
}

HKEY OpenKey (HKEY hRootKey, char strKey[]) {
    HKEY hKey;
    
    LONG nError = RegOpenKeyEx (hRootKey, strKey, 0, KEY_ALL_ACCESS, &hKey);
    
	if (nError == ERROR_FILE_NOT_FOUND) {
        RegCreateKeyEx (hRootKey, strKey, 0, NULL, 0, KEY_ALL_ACCESS, NULL, &hKey, NULL);
    }
    return hKey;
}
 
void SetVal (HKEY hKey, LPCTSTR lpValue, const char * data, int lol) {
    RegSetValueEx (hKey, lpValue, 0, REG_SZ, (LPBYTE)data, lol);
}

void ReadPlaySounds() {
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
		gfx.settings->playSounds = true;
	} else {
		gfx.settings->playSounds = result[0] == '1';
	}	
}

ScreensaverMenu::ScreensaverMenu(int x, int y)
	: Menu(x, y)
	, paletteColor(0)
{
}

ItemBehavior* ScreensaverMenu::getItemBehavior(Common& common, MenuItem& item)
{
	switch(item.id)
	{
		case PlaySounds:
		{
			ReadPlaySounds();
			
			return new BooleanSwitchBehavior(common, gfx.settings->playSounds, [](bool v) {
				gfx.settings->playSounds = v;
				HKEY handler = OpenKey(HKEY_CURRENT_USER, "Software\\OpenLiero\\Screensaver");
				SetVal(handler, "PlaySounds", v ? "1" : "0", 1);
			 });
		}
		default:
			return Menu::getItemBehavior(common, item);
	}
}

void ScreensaverMenu::onUpdate()
{
	ReadPlaySounds();
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
