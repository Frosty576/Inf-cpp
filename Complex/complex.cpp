#include <iostream>
#include "complex.h"

int main() {
	complex num1{ 2,4 };
	complex num2{ 4,6 };
	complex ergebnisAdd;
	complex ergebnisSub;
	ergebnisAdd = num1 + num2;
	ergebnisSub = num1 - num2;
	cout << "Die real Teil betraegt " << ergebnisAdd.get_real() << " und der Imaginaer teil betraegt " << ergebnisAdd.get_imaginaer() << "i" << endl;
	cout << "Die real Teil betraegt " << ergebnisSub.get_real() << " und der Imaginaer teil betraegt " << ergebnisSub.get_imaginaer() << "i" << endl;
	return 0;
}