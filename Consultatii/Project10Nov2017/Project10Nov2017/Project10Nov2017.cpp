// Project10Nov2017.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;


class Factura {
public:
	char* nume;
	int suma;
	char sursa[50];
	int valori[10];
	int n;
public:
	void setSuma(int valoare) {
		this->suma = valoare;
	}

	friend void operator>>(istream& consola, Factura& t);
};

class CutieFactura {
public:
	int rand;
	Factura factura;
};


class CutieFactura2 {
public:
	int rand;
	Factura* pFactura;

};

void operator>>(istream& consola, Factura& t) {
	cout << endl<<"Suma este";
	int temp;
	cin >> temp;
	t.setSuma(temp);
	//cin >> t.suma;
	cout << endl << "Sursa este ";
	cin >> t.sursa;
	cout << endl << "Numele este";
	//char* buffer = new char[100000];
	char buffer[100000];
	//t.nume = new char[strlen(buffer)+1]
	cin >> buffer;
	t.nume = new char[strlen(buffer) + 1];
	strcpy(t.nume, buffer);
	//delete [] buffer;

	cout << endl << "Numar de elemente";
	cin >> t.n;

	//t.valori = new int[t.n];

	for (int i = 0; i < t.n; i++) {
		cout << endl << "Valoare " << i << ": ";
		cin >> t.valori[i];
	}
}


int main()
{
	Factura t;
	cin >> t; //operator>>(cin,t)

	CutieFactura cf;
	cf.rand = 1;
	cf.factura = t;

	cout << endl << "Nume factura" << cf.factura.nume;

	CutieFactura2 cf2;
	cf2.pFactura = new Factura();
	cf2.pFactura = &t;
	cf2.pFactura = new Factura[10];


    return 0;
}

