#pragma once
#include <iostream>

class Auto {

private:
	int radzahl;
	std::string farbe;
	int ps;
	int anzahl_sitze;
	float spritverbrauch;
	float tankinhalt;
	int tankgroesse;
public:
	//Standardkonstruktor
	Auto() {
		radzahl = 0;
		farbe = "keine_farbe";
		ps = 0;
		anzahl_sitze = 0;
		spritverbrauch = 0.0f; //Liter/100km
		tankinhalt = 0.0f;
		tankgroesse = 0;
	}

	//Allgemeiner Konstruktor
	Auto(int A, std::string B, int C, int D, float E, float F, int G) : radzahl{ A }, farbe{ B }, ps{ C }, anzahl_sitze{ D }, spritverbrauch{ E }, tankinhalt{ F }, tankgroesse{ G }
	{}

	//Kopierkonstruktor
	Auto(const Auto& c) : radzahl{ c.radzahl }, farbe{ c.farbe }, ps{ c.ps }, anzahl_sitze{ c.anzahl_sitze }, spritverbrauch{ c.spritverbrauch }, tankinhalt{ c.tankinhalt }, tankgroesse{ c.tankgroesse }
	{}

	//Destruktor
	~Auto()
	{}

	//Methoden
	float fahren(float strecke) {
		float gesamtverbrauch = ((spritverbrauch / 100) * strecke);
		if (gesamtverbrauch <= tankinhalt) {
			tankinhalt = tankinhalt - gesamtverbrauch;
			std::cout << "Sie sind " << strecke << " km gefahren" << std::endl;
			return strecke;
		}
		else {
			float moeglich_strecke = tankinhalt / (spritverbrauch / 100);
			std::cout << "Ihr Tankinhalt reicht fuer die Strecke nicht aus. Sie sind " << moeglich_strecke << " km gefahren, bevor ihr Tank entleert wurde" << std::endl;
			return moeglich_strecke;
		}
	}

	//Getter Methoden
	int get_radzahl() const { return radzahl; }
	std::string get_farbe() const { return farbe; }
	int get_ps() const { return ps; }
	int get_anzahl_sitze() const { return anzahl_sitze; }
	float get_spritverbrauch() const { return spritverbrauch; }
	float get_tankinhalt() const { return tankinhalt; }
	int get_tankgroesse() const { return tankgroesse; }

	//Setter Methoden
	bool set_tankinhalt(float spritmenge) {
		if ((spritmenge < 0) || (spritmenge > tankgroesse) || (spritmenge + tankinhalt > tankgroesse)) {
			std::cout << "Tankgroesse ist zu Klein" << '\n';
			return false;
		}
		tankinhalt += spritmenge;
		std::cout << "Tank enthaelt nun " << tankinhalt << " Gas" << "\n";
		return true;
	}
};