#include <iostream>

using namespace std;

int main() {
	float* pmesswerte;
	float n;
	float varianz = 0;
	float sumvarianz = 0;
	float mittelwert = 0;
	float summe = 0;

	cout << "Wie viele Messwerte moechten Sie eingeben?\n";
	cin >> n;

	cout << "Bitte ihre Messwerte eingeben:\n";
	pmesswerte = new float[n];

	for (int i = 0; i < n; i++) {
		cin >> *(pmesswerte + i);
	}

	cout << "Messwerte[m]\n";
	cout << "---------\n";

	for (int i = 0; i < n; i++) {
		cout << *(pmesswerte + i) << endl;
		summe += *(pmesswerte + i);
	}

	mittelwert = summe / n;

	for (int i = 0; i < n; i++) {
		sumvarianz += (*(pmesswerte + i) - mittelwert) * (*(pmesswerte + i) - mittelwert);
	}

	varianz = sumvarianz / n;

	cout << endl << "Mittelwert = " << mittelwert << "m Varianz = " << varianz << " quadratmeter" << endl;

	system("pause");

	delete[] pmesswerte;
}