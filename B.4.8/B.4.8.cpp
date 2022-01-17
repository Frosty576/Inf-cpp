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
}