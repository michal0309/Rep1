#include <iostream>

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
	cout << "Niech liczba " << liczba << " bedzie Ci szczesliwa!";
    getchar();
    cout << "Policzmy rownanie kwadratowe!" << endl;

    return 0;
}
