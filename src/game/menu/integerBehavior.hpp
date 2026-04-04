#pragma once

#include "itemBehavior.hpp"
#include <functional>

struct Common;
struct Menu;

struct IntegerBehavior : ItemBehavior
{
	IntegerBehavior(Common& common, int& v, int min, int max, int step = 1, bool percentage = false)
	: common(common), v(v)
	, min(min), max(max), step(step)
	, scrollInterval(5)
	, percentage(percentage)
	, allowEntry(true)
	, set([&](int newV) { v = newV; })
	{
	}
	
	IntegerBehavior(Common& common, int& v, int min, int max, int step, bool percentage, std::function<void(int)> set)
	: common(common), v(v)
	, min(min), max(max), step(step)
	, scrollInterval(5)
	, percentage(percentage)
	, allowEntry(true)
	, set(set)
	{}

	std::function<void(int)> set;

	bool onLeftRight(Menu& menu, MenuItem& item, int dir);
	int onEnter(Menu& menu, MenuItem& item);
	void onUpdate(Menu& menu, MenuItem& item);

	Common& common;
	int& v;
	int min, max, step;
	int scrollInterval;
	bool percentage;
	bool allowEntry;
};
