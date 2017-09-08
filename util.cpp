/*
 * util.cpp
 *
 *  Created on: 2017/9/5
 *      Author: jackhong
 */
#include <string>
#include "util.h"

using namespace std;

Util* Util::instance = 0;

Util* Util::getInstance()
{
	if (instance==0)
		instance = new Util();
	return instance;
}

string Util::getSchoolName()
{
	return "CYUT";
}

Util::Util() {
	// TODO Auto-generated constructor stub

}

Util::~Util() {
	// TODO Auto-generated destructor stub
}

