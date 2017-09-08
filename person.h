#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	virtual void eat()=0;
	Person();
	Person(string name);
	virtual ~Person();
};

#endif
