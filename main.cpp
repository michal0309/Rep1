#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include "binarny.cpp"
#include "ciagi.cpp"
#include "rowanie.cpp"

using namespace std;



int main()
{
    cout << "Hello world!" << endl;
    cout << "************" << endl;
    getchar();

    cout << "Podaj swoje imie: ";
	cin >> imie;

	cout << "Podaj swoja ulubiona liczbe: ";
	cin >> liczba;
	cout << endl;

	cout << "No to zaczynamy " << imie << "!"<< endl;
	cout << "Niech liczba " << liczba << " bedzie Ci szczesliwa!" << endl;
	cout << "***************************************************" << endl;
	cout << "Chcielismy zabawic cie rozwiazaniem rownania kwadratowego, ale cos nam nie dziala, moze naprawimy pozniej" << endl;
	cout << "Konwerter binarny tez nie dziala xD" << endl;
    getchar();
    return 0;
}
