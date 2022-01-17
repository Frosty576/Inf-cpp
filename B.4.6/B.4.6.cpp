#include<iostream>
#include <stdio.h>
using namespace std;

int main() {

int i;
float messwert[] = {99.975f, 100.002f, 99.999f, 99.982f, 100.100f, 100.009f, 99.826f, 100.547f, 100.023f, 100.008f};
float varianz = 0;
float sumvarianz = 0;
float mittelwert = 0;
float summe = 0;

		cout << "Messwerte[m]\n";
		cout << "---------\n";

		for (i = 0; i < (sizeof(messwert) / sizeof(messwert[0])); i++) {
			cout << messwert[i] << endl;
			summe += messwert[i];
		}

		mittelwert = summe / (sizeof(messwert) / sizeof(messwert[0]));

		for (i = 0; i < (sizeof(messwert) / sizeof(messwert[0])); i++) {
			sumvarianz += (messwert[i] - mittelwert) * (messwert[i] - mittelwert);
		}
		
		varianz = sumvarianz / (sizeof(messwert) / sizeof(messwert[0]) - 1);

		cout << endl << "Mittelwert = " << mittelwert << "m Varianz = " << varianz << " quadratmeter" << endl;

		system("pause");

}