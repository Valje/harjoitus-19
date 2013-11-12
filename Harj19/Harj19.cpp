// Valtteri Ahonen
// Harjoitus 19
// 12.11.2013

#include <iostream>
using namespace std;

int main()
{
	int nop[5] = {0, 0, 0, 0, 0}; // Annettuja nopeuksia varten 5-paikkainen taulukko
	int i = 0; // Taulukon paikkaan viittaamista varten

	do
	{
		cout << "Anna nopeus: ";
		cin >> nop[i];
		if (nop[i] < 0) // Jos annettu nopeus on nolla, lopetetaan ohjelma.
		{
			return 0;
		}
		if (i == 4){ // Jos ollaan taulukon viimeisessä paikassa, niin siirrytään sitten ensimmäiseen.
			i = 0;
		}
		else { // Jos ei olla taulukon viimeisessä paikassa, siirrytään seuraavaan.
			i++;
		}
		cout << "Viiden viimeksi annetun nopeuden keskiarvo on " << (nop[0] + nop[1] + nop[2] + nop[3] + nop[4]) / 5 << endl << endl; // Lasketaan taulukon arvojen keskiarvo
	} while (nop[i] >= 0); // Kunhan luuppaa.
}