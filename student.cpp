#include <iostream>
#include "person.h"
#include "student.h"

Student::Student(string name,string id, int score)
{
	this->name = name;
	this->score = score;
	this->id = id;
}

Student::~Student()
{
	cout << "destroy student object" << endl;
}

void Student::eat()
{
	cout << "學生：" << name << " is eating..." << endl;
}

void Student::test()
{
	cout << "學號： " << id << " is testing, and score is:" << score << endl;
}
