#include <iostream>
#include <math.h>

using namespace std;

void zamiana_na_binarny(int liczba, bool tab[])
{
	int i = 0;
	while (liczba != 0)
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}
	return;
}

int zamiana_na_dec(bool tab[])
{
	int w = 0, i;
	for (i = 0; i <= 31; i++)
		w = w + (tab[i] * pow(2, i));
	
	return w;
}

int main() {

	bool tablica[32];
	int liczba, j;

	for (int i = 0; i <= 31; i++)
		tablica[i] = false;

	cout << "Podaj nieujemna liczbe calkowita: ";
	cin >> liczba;

	cout << "W systemie binarnym to: ";
	zamiana_na_binarny(liczba, tablica);

	for (j = 31; j >= 0; j--)
		cout << tablica[j];

	cout << "\nTa liczba binarna w systemie dziesietnym to: " << zamiana_na_dec(tablica);

	getchar(); getchar();
	delete tablica;
	return 0;
}