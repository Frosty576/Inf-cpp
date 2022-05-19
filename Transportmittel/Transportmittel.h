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

class Fahrrad : public LandTransportmittel {
private:
	int anzahlgaenge;
public:
	Fahrrad(double Hoehe, double Breite, int Radzahl, int Anzahlgaenge) :LandTransportmittel(Hoehe, Breite, Radzahl), anzahlgaenge(Anzahlgaenge)
	{}

	void freihaendigfahren(string name) {
		cout << name << " faehrt freihaendig" << endl;
	}
	int get_anzahlgaenge() const { return anzahlgaenge; }
};

class Rikscha : public LandTransportmittel {
private:
	string farbe;
public:
	Rikscha(double Hoehe, double Breite, int Radzahl, string Farbe) : LandTransportmittel(Hoehe, Breite, Radzahl), farbe(Farbe)
	{}

	void ziehen(int anzahlpersonen) {
		cout << "Sie ziehen " << anzahlpersonen << " personen" << endl;
	}
	void schieben(double km) {
		cout << "Sie muessen das Rikscha " << km << " km schieben" << endl;
	}
	string get_farbe() const { return farbe; }
};

class Auto : public LandTransportmittel {
private:
	double spritverbrauch;
public:
	Auto(double Hoehe, double Breite, int Radzahl, double Spritverbrauch) : LandTransportmittel(Hoehe, Breite, Radzahl), spritverbrauch(Spritverbrauch)
	{}
	void tanken(int liter) {
		cout << "Sie Tanken " << liter << " liter" << endl;
	}
	void fahren(double km) {
		cout << "Sie fahren " << km << " km mit dem Auto" << endl;
	}
	double get_spritverbrauch() const { return spritverbrauch; }
};