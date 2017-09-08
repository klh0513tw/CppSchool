#include <iostream>
#include <list>
#include "teacher.h"
using namespace std;

void Teacher::addStudent(Student* s)
{
  students.push_back(s);
}

string Teacher::getAllStudentNames()
{
   string s="";
   for (list<Student*>::iterator e = students.begin();
		   e!=students.end(); e++)
   {
       s += (*e)->name +"("+(*e)->id+")"+" ";
   }
   return s;
}

Teacher::Teacher(string name)
{
	this->name = name;
}
	
Teacher::~Teacher()
{
   cout << "destroy teacher object..." << endl;
}

void Teacher::eat()
{
	cout << "老師：" << name << " is eating..." << endl;
}

void Teacher::teach()
{
	cout << "老師：" << name << " is teaching..." << endl;
}
	
