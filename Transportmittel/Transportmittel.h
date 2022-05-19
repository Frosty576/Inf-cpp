#pragma once
#include <iostream>
using namespace std;

class Transportmittel {
private:
	double hoehe;
	double breite;
public:
	Transportmittel(double Hoehe, double Breite) : hoehe(Hoehe), breite(Breite)
	{}
	void bewegen(string Richtung) {
		cout << "In Richtung " << Richtung << " bewegen" << endl;
	}
	double get_hoehe() const { return hoehe; }
	double get_breite() const { return breite; }
};

class LandTransportmittel : public Transportmittel {
private:
	int radzahl;
public:
	LandTransportmittel(double Hoehe, double Breite, int Radzahl) : Transportmittel(Hoehe, Breite), radzahl(Radzahl)
	{}
	void fahren(double km) {
		cout << km << " km fahren" << endl;
	}
	void schieben(double km) {
		cout << km << " km schieben" << endl;
	}
	int get_radzahl() const { return radzahl; }
};

class WasserTransportmittel : public Transportmittel {
private:
	double bruttoregistertonnen;
public:
	WasserTransportmittel(double Hoehe, double Breite, double Bruttoregistertonnen) : Transportmittel(Hoehe, Breite), bruttoregistertonnen(Bruttoregistertonnen)
	{}
	void anlegen(string Anlegehafen) {
		cout << "Ihre Anlegehafen ist  " << Anlegehafen << endl;
	}
	void ablegen(string Ablegehafen) {
		cout << "Ihre Ablegehafen ist  " << Ablegehafen << endl;
	}
	double get_bruttoregistertonnen() const { return bruttoregistertonnen; }
};
