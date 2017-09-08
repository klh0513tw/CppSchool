#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "course.h"
#include "util.h"
using namespace std;

int main(void)
{
	string school = Util::getInstance()->getSchoolName();
	cout << "School Name:" << school << endl;

	Person* p[3];
	Teacher* t = new Teacher("Wang");
	Student* s1 = new Student("Mary","B001",60);
	Student* s2 = new Student("Lee","A001",80);
	Course* c = new Course("Database");

	p[0] = t;
	p[1] = s1;
	p[2] = s2;
	
	for (int i=0;i<3;i++) {
		p[i]->eat();
	}
	
	t->addStudent(s1);
	t->addStudent(s2);
	cout << "老師：" << t->name <<"的學生有："	<< t->getAllStudentNames() << endl;

	c->addStudent(s1);
	c->addStudent(s2);

	cout << "課程：" << c->name <<"的學生有："	<< c->getAllStudentNames() << endl;

	delete s1;
	delete s2;
	delete t;

	return 0;
}
