/*
 * ScreenManager.cpp
 *
 *  Created on: 2013��11��20��
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

