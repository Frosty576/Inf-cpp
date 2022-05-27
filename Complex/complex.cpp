#include <iostream>
#include "complex.h"

int main() {
	complex num1{ 2,4 };
	complex num2{ 4,6 };
	complex num3;
	cin >> num3;
	complex ergebnisAdd;
	complex ergebnisSub;
	ergebnisAdd = num1 + num2;
	ergebnisSub = num1 - num2;
	cout << ergebnisAdd.get_real() << "+" << ergebnisAdd.get_imaginaer() << "i" << endl;
	cout << ergebnisSub.get_real() << ergebnisSub.get_imaginaer() << "i" << endl;
	cout << num1 << endl;
	num1.set_real(1);
	num1.set_imaginaer(2);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << ergebnisAdd << endl;
	cout << ergebnisSub << endl;
	return 0;
}