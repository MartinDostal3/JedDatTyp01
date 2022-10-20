// JedDatTyp01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	char x;
	int soucet = 0;





	cout << "Zadej pocet prvku posloupnosti: ";

	cin >> n;

	cout << "\nZadavej znaky posloupnosti: " << endl;
	
	bool jeVetsi = false;
	int i = 0;
	while (i < n && !jeVetsi)
	{
		cin >> x;
		cout << "Zadany znak je: " << x << endl; 
		soucet += x;

		if (soucet > 1000)
		{
			jeVetsi = true;
		}




		i++;
	}

	if (jeVetsi)
	{
		cout << "\nAno soucet znaku je vetsi nez 1000 a je: " << soucet <<endl <<endl;
	}
	else
	{
		cout << "\nNe soucet neni vetsi nez 1000" << endl << endl;
	}
		



}


