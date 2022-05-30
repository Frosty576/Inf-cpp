#include <iostream>
#include "complex.h"

int main() {
	complex num1{ 2.0, 4.0 };
	complex num2{ 0.0, 0.0 };
	complex num3;
	
	cin >> num3;
	complex ergebnisAdd;
	complex ergebnisSub;
	ergebnisAdd = num1 + num2;
	ergebnisSub = num1 - num2;
	cout << ergebnisAdd.get_real() << "+" << ergebnisAdd.get_imaginaer() << "i" << endl;
	cout << ergebnisSub.get_real() << ergebnisSub.get_imaginaer() << "i" << endl;
	cout << num1 << endl;
	//num1.set_real(1);
	//num1.set_imaginaer(2);
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << ergebnisAdd << endl;
	cout << ergebnisSub << endl;
	complex ergebnisDiv;
	complex ergebnisDiv1;
	ergebnisDiv = num1 / num2;
	ergebnisDiv1 = num1 / num3;
	cout << ergebnisDiv << endl;
	cout << ergebnisDiv1 << endl;
	return 0;
}