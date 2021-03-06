// ProjectCourse4.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;

struct Student {
	char * name;
	char faculty[50];
	int age;
	int * grades;
	int noGrades;
	char gender;
};

Student createStudent(char * Name, char* Faculty, int Age) {
	Student newStudent;
	newStudent.name = new char[strlen(Name) + 1];
	strcpy_s(newStudent.name, strlen(Name) + 1, Name);
	strcpy_s(newStudent.faculty, Faculty);
	newStudent.age = Age;
	newStudent.grades = NULL;
	newStudent.noGrades = 0;

	return newStudent;
}

void printStudent(Student s) {
	cout << endl << s.name << " is a student at " << s.faculty;
	cout << endl << "Grades number " << s.noGrades;
}



class ClassStudent {
public:
	char * name;
	char faculty[50];
	int age;
	int * grades;
	int noGrades;
	char gender;
};

void printClassStudent(ClassStudent s) {
	cout << endl << s.name << " is a student at " << s.faculty;
	cout << endl << "Grades number " << s.noGrades;
}

int main()
{

	Student stud = createStudent("John","CSIE",21);
	printStudent(stud);

	Student stud2;	//article
	ClassStudent student;	//object - instance of a class

	printClassStudent(student);


    return 0;
}

