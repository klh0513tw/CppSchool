#ifndef TEACHER_H_
#define TEACHER_H_
#include <string>
#include <list>
#include "person.h"
#include "student.h"

using namespace std;

class Teacher : public Person
{
public:
    void teach();
    void eat();
    void addStudent(Student* s);
    string getAllStudentNames();
	Teacher(string name);
	~Teacher();
private:
	list<Student*> students;
};

#endif
