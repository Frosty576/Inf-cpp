#include <iostream>

using namespace std;

void berechne_mittelwert_varianz(double arr[],double* mw, double* v, int size) {
	double summe = 0.0;
	double sumvarianz = 0.0;

	cout << "Messwerte[m]\n";
	cout << "---------\n";
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << endl;
		summe += *(arr + i);
	}

	*mw = summe / static_cast<double>(size);

	for (int i = 0; i < size; i++) {
		sumvarianz += (*(arr + i) - *mw) * (*(arr + i) - *mw);
	}

	*v = sumvarianz / static_cast<double>(size);
}

int main() {
	double varianz = 0.0;
	double mittelwert = 0.0;
	double* pmesswerte;
	int n;
	
	cout << "Wie viele Messwerte moechten Sie eingeben?\n";
	cin >> n;

	cout << "Bitte ihre Messwerte eingeben:\n";
	pmesswerte = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> *(pmesswerte + i);
	}

	berechne_mittelwert_varianz(pmesswerte, &mittelwert, &varianz, n);

	
	cout << endl << "Mittelwert = " << mittelwert << "m Varianz = " << varianz << " quadratmeter" << endl;
	system("pause");

	delete[] pmesswerte;
	return 0;
}