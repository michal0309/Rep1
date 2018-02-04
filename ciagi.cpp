#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string ciag, ciag2, wynik;

int porownanie(int i, int j)
{
	if (!ciag[i] || !ciag2[j]) return 0;
	else if (ciag[i] == ciag2[j]) return 1 + porownanie(i + 1, j + 1);
	else return max (porownanie(i + 1, j), porownanie(i, j + 1));
}

int main() {

	int i=0, j=0;

	cout << "Podaj pierwszy ciag: ";
	cin >> ciag;
	cout << "Podaj drugi ciag:    ";
	cin >> ciag2;

	wynik = "";
	while (ciag[i] && ciag2[j])
		if (ciag[i] == ciag2[j]){
			wynik = wynik + ciag[i]; 
			i++; 
			j++;
		}
		else 
			if (porownanie(i + 1, j) <= porownanie(i, j + 1)) 
				 j++; 
			else i++;
		cout << "Najdluzszy wspolny ciag to: " << wynik << endl;

system("pause");
return 0;
}