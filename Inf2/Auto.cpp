#include <iostream>
#include "Auto.h"

Auto renault{ 4, "rot", 1000, 5, 5.0f, 100.0f, 100 };

int main() {

	Auto bmw{ 4, "rot", 1000, 5, 5.0f, 50.0f, 100 };
	bmw.fahren(9000);
	bmw.set_tankinhalt(50);

	Auto* volkswagen = new Auto{ 4, "blau", 300, 5, 10.0f, 200.0f, 200 };
	volkswagen->fahren(1000);
	delete volkswagen;

	std::cout << '\n' << "Attribute ihre Auto:" << '\n'
		<< "Radzahl: " << bmw.get_radzahl() << '\n'
		<< "farbe: " << bmw.get_farbe() << '\n'
		<< "ps: " << bmw.get_ps() << '\n'
		<< "Anzahl Sitzplaetze: " << bmw.get_anzahl_sitze() << '\n'
		<< "Spritverbrauch: " << bmw.get_spritverbrauch() << '\n'
		<< "Tankinhalt: " << bmw.get_tankinhalt() << '\n'
		<< "Tankgroesse: " << bmw.get_tankgroesse() << '\n';

	system("pause");
	return 0;
}