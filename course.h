#ifndef COURSE_H_
#define COURSE_H_
#include <string>
#include <map>
#include "student.h"

using namespace std;

class Course {
public:
	string name;
	Course(string name);
    void addStudent(Student* s);
    string getAllStudentNames();
private:
	map<string,Student*> students;

};

#endif
