#pragma once

#include "menu.hpp"

struct Common;
struct ItemBehavior;

struct ScreensaverMenu : Menu
{
	enum
	{
		PlaySounds
	};

	ScreensaverMenu(int x, int y);

	virtual ItemBehavior* getItemBehavior(Common& common, MenuItem& item);

	virtual void drawItemOverlay(Common& common, MenuItem& item, int x, int y, bool selected, bool disabled);

	virtual void onUpdate();

	int paletteColor;
};
