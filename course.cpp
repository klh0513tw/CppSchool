#include "course.h"
#include <string>
using namespace std;

Course::Course(string name) {
	this->name = name;
}

void Course::addStudent(Student* s)
{
	students[s->name] = s;
}


string Course::getAllStudentNames()
{
   string s="";
   for (map<string,Student*>::iterator e = students.begin();
		   e!=students.end(); e++)
   {
       s += e->second->name +"("+e->second->id+") ";
   }
   return s;
}
