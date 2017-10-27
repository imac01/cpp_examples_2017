// ProjectCurs4.cpp : Defines the entry point for the console application.
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
	int inaltime;
};

Student initializareStudent(char * Name, char* Faculty, int Age) {
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
	cout << endl << s.name << 
		" este student la " << s.faculty;
	cout << endl << "Numar note " << s.noGrades;
}




class ClasaStudent {
private:
	char * name;
	char faculty[50];
	int age;
	int * grades;
public:
	int noGrades;
private:
	char gender;
	int inaltime;
public:
	void afisareStudent(ClasaStudent s) {
		cout << endl << s.name <<
			" este student la " << s.faculty;
		cout << endl << "Numar note " << s.noGrades;
	}

	//functii constructor - speciale
	//constructor default - implicit
	ClasaStudent() {
		cout << endl << "Apel constructor";
		this->age = 0;
		this->inaltime = 0;
		this->noGrades = 0;
		this->name = new char[strlen("Anonim") + 1];
		strcpy(this->name, "Anonim");
		strcpy(this->faculty, "ASE");
		this->grades = NULL;

	}

	//constructor cu parametri
	ClasaStudent(char * name, char* faculty, int age) {
		noGrades = 0;
		//shadowing
		//age = age;
		this->age = age;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		strcpy(this->faculty, faculty);
		this->grades = NULL;
	}

};

int main()
{

	//Student stud;
	//stud.noGrades = 0;
	//stud = initializareStudent("Gigel", "CSIE", 22);
	//printStudent(stud);

	ClasaStudent student; //obiect = instanta unei clase
	student.noGrades = 0;
	//student.inaltime = 175;
	
	ClasaStudent student2;

	//student = student.initializareClasaStudent("Ana", "MK", 21);
	//student2 = student.initializareClasaStudent("Ion", "MAN", 21);
	student.afisareStudent(student);
	student.afisareStudent(student2);
}

