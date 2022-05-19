#include "Transportmittel.h"

int main() {
	Transportmittel box{ 2,3 };
	cout << box.get_hoehe() << endl;
	cout << box.get_breite() << endl;
	box.bewegen("links");
	return 0;
}