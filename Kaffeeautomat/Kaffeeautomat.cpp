#include <iostream>
using namespace std;

int main() {
	system("CLS"); //Bildshirm löschen

	cout << "Herzlich Willkommen beim Kaffee-Automaten!\n";
	cout << "Bitte w\x84hlen Sie aus : \n";
	cout << "(k) Kaffee\n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode\n";

	string x;
	cin >> x; //User Input eingabe und in string x gespeichert 

	if ((x == "k") || (x == "e") || (x == "s")) {							  //ueberprueft ob user input k,e oder s ist
		cout << "Sie haben sich f\u0081r Auswahl " << x << " entschieden.\n"; //Wenn ja, wird satz ausgegeben. 
	}

	system("pause");

	return 0;
}