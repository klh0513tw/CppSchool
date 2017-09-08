#include <iostream>
#include <string.h>
#include "person.h"
using namespace std;

Person::Person() {}

Person::Person(string name)
{
    this->name = name;
}

Person::~Person()
{
	cout << "destroy person object..." << endl;
}

void Person::eat()
{
	cout << name << " is eating..." << endl;
}
