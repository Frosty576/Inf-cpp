#pragma once
#include <iostream>
using namespace std;

class Transportmittel {
private:
	double hoehe;
	double breite;
public:
	Transportmittel(double Hoehe, double Breite) : hoehe(Hoehe), breite(Breite)
	{
		cout << "Allgemeiner konstruktor Transportmittel" << endl;
	}
	void bewegen(string Richtung) {
		cout << "In Richtung " << Richtung << " bewegen" << endl;
	}
	double get_hoehe() const { return hoehe; }
	double get_breite() const { return breite; }
};