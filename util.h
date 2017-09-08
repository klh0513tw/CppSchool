/*
 * util.h
 *
 *  Created on: 2017/9/5
 *      Author: jackhong
 */

#ifndef UTIL_H_
#define UTIL_H_
#include <string>
using namespace std;

class Util {
public:
	static Util* getInstance();
	string getSchoolName();
	Util();
	virtual ~Util();

private:
	static Util* instance;
};

#endif /* UTIL_H_ */
