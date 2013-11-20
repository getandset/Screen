/*
 * screen.h
 *
 *  Created on: 2013Äê11ÔÂ20ÈÕ
 *      Author: lj
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <vector>
#include <string>
class Screen {
public:
	typedef std::string::size_type pos;

private:
	pos width = 0;
	pos height = 0;
	pos cursor = 0;
	std::string content;
};

class ScreenManager;

#endif /* SCREEN_H_ */
