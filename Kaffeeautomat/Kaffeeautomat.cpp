#include <iostream>
using namespace std;

int main() {
	system("CLS"); //Bildshirm löschen

	cout << "Herzlich Willkommen beim Kaffee-Automaten!\n";
	cout << "Bitte w\x84hlen Sie aus : \n";
	cout << "(k) Kaffee\n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode\n";

	char x;
	cin >> x; //User Input eingabe und in string x gespeichert 

	switch(x) {  
	case 'k' :
		cout << "Sie haben sich f\u0081r die Auswahl Kaffee entschieden.\n";
		break;
	case 'e' :
		cout << "Sie haben sich f\u0081r die Auswahl Espresso entschieden.\n";
		break;
	case 's' :
		cout << "Sie haben sich f\u0081r die Auswahl Service-Mode entschieden.\n";
		break;
	}

	system("pause");

	return 0;
}