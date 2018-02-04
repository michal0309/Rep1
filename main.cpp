#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

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

    float a, b, c, d, e, f, g, h, i;
	cout << "a*x^2 + b*x + c = 0" << endl;
	cout << endl;
		cout << "Podaj wartosc A: ";
		cin >> a;
		cout << endl;
		cout << "Podaj wartosc B: ";
		cin >> b;
		cout << endl;
		cout << "Podaj wartosc C: ";
		cin >> c;
		cout << endl;

	if (a==0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Jest to rownanie tozsamosciowe, " << c << " jest rowne 0!" << endl;
			}
			else
			{
				cout << "Rownanie sprzeczne, " << c << " nie jest rowne 0!" << endl;
			}
		}
		else
		{
			cout << "To nie jest rownanie kwadratowe!" << endl;
			i = (-c) / b;
			cout << "Ale wartosc niewiadomej wynosi: " << i << endl;
		}
	}
	else
	{
		d = (b * b) - (4 * a * c);

		if (d > 0)
		{
			g = sqrt(d);
			e = (-b - g) / (2 * a);
			f = (-b + g) / (2 * a);
			cout << "Wartosc X to: " << e << " lub " << f;
		}
		if (d == 0)
		{
			h = (-b) / (2 * a);
				cout << "Wartosc X to: " << h;
		}
		if (d < 0)
		{
			cout << "Nie ma rozwiazan";
		}
		}
    getchar();
    return 0;
}
