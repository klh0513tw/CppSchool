#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include "person.h"
using namespace std;

class Student : public Person
{
public:
	string id;
	int score;
	void test();
	void eat();

	Student(string name,string id,int score);
	~Student();
};

#endif
