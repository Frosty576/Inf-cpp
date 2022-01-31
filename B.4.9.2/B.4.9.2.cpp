#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

bool berechne_kuegeldaten(double fr, double* po, double* pv) {

	if (fr < 0.0)
		return false;
	*po = 4.0 * M_PI * pow(fr, 2.0);
	*pv = (4.0 / 3.0) * M_PI * pow(fr, 3.0);
	return true;
}

int main() {
	double r;
	double o;
	double v;
	cout << "Radius eingeben.\n";
	cin >> r;
	if (berechne_kuegeldaten(r, &o, &v) == true) {
		cout << "\nOberflaeche der Kuegel = " << o << endl << "Volume der Kuegel = " << v << endl;
		system("pause");
	}
	else {
		cout << "Eingabe muss Positive sein.\n";
		system("pause");
	}
}