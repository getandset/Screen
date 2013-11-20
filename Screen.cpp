/*
 * Screen.cpp
 *
 *  Created on: 2013��11��20��
 *      Author: lj
 */

#include <string>
#include "screen.h"

class Screen {
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd, char c){};
private:
	pos height = 0, width = 0;
	pos cursor = 0;
	std::string content;
};
