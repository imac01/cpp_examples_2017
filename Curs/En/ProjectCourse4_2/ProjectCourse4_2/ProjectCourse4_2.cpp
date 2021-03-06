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
private:
	char * name;
	char faculty[50];
	int age;
	int * grades;
	int noGrades;
	char gender;
public:
	//constructor -default
	ClassStudent() {
		this->age = 16;
		this->noGrades = 0;
		this->grades = NULL;
		strcpy(this->faculty, "CSIE");
		this->name = new char[strlen("John Doe")+1];
		strcpy(this->name, "John Doe");

	}
	//constructor
	ClassStudent(char * name, char* faculty, int age) {
		//shadowing
		//age = age;
		this->age = age;
		this->noGrades = 0;
		this->grades = NULL;
		strcpy(this->faculty, faculty);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	void printClassStudent() {
		cout << endl <<this->name << " is a student at " << this->faculty;
		cout << endl << "Grades number " << this->noGrades;
		cout << endl << "The age " << this->age;
	}

};



int main()
{

	//Student stud = createStudent("John", "CSIE", 21);
	//printStudent(stud);

	//Student stud2;	//article
	ClassStudent student;	//object - instance of a class
	ClassStudent student2("Alice","MK",22);	//object - instance of a class

	//student = student.createClassStudent("John", "CSIE", 21);

	student.printClassStudent();
	student2.printClassStudent();


	return 0;
}

