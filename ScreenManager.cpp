/*
 * ScreenManager.cpp
 *
 *  Created on: 2013Äê11ÔÂ20ÈÕ
 *      Author: lj
 */

#include <vector>
#include "screen.h"
class ScreenManager {
private:
	std::vector<Screen> screens;

public:
	void add (Screen sc) {
		screens.push_back(sc);
	}
	void getScreen (int index) {

	}

};

