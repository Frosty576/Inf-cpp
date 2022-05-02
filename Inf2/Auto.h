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
	
};