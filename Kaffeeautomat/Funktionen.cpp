#include <iostream>
#include <conio.h>
#include <cstring>
#include "Kaffeeautomat.h"

using namespace std;

bool UI(bool* pbkaffee, bool* pbmilch, bool* pbzucker, bool* pbespresso, bool* pbservice, daten kaffee) {

	bool beide = false;
	system("CLS");	//Bildshirm löschen
	cout << "Herzlich Willkommen beim Kaffee-Automaten!\n";
	cout << "Preis pro Tasse :\n";
	cout << "Kaffee oder Espresso: 1 Euro\n";
	cout << "Milch oder Zucker:  0.1 Euro\n";
	cout << "\n";
	cout << "Bitte w\x84hlen Sie aus:\n";
	cout << "(k) Kaffee\n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode\n";

	char x;
	cin >> x;
	switch (x) {
	case 'k':
		*pbkaffee = true;
		cout << "Sie haben sich f\u0081r die Auswahl Kaffee entschieden.\n";
		UI_zusaetze_kaffee(&beide, pbmilch, pbzucker);
		PRINTVARIABLE(*pbkaffee);
		break;
	case 'e':
		cout << "Sie haben sich f\u0081r die Auswahl Espresso entschieden.\n";
		*pbespresso = true;
		UI_zusaetze_kaffee(&beide, pbmilch, pbzucker);
		PRINTVARIABLE(*pbespresso);
		break;
	case 's':
		cout << "Sie haben sich f\u0081r die Auswahl Service-Mode entschieden.\n";
		*pbservice = true;
		PRINTVARIABLE(*pbservice);
		break;
	default:
		cout << "Falsche Eingabe!\n";
		system("pause");
		break;
	}
	return false;
}

void UI_zusaetze_kaffee(bool beide, bool* pbmilch, bool* pbzucker) {
	cout << "M”chten Sie Zucker (j/n)?\n";
	char cinz; // (j/n) Zucker eingabe
	cin >> cinz;
	switch (cinz) {
	case 'j':
		*pbzucker = true;
		break;
	case 'n':
		*pbzucker = false;
		break;
	default:
		cout << "Falsche Eingabe!\n";
		system("pause");
		UI_zusaetze_kaffee(beide, pbmilch, pbzucker);
		return;
	}
	PRINTVARIABLE(*pbzucker);

	cout << "M”chten Sie Milch (j/n)?\n";
	char cinm; // (j/n) Milch eingabe
	cin >> cinm;
	switch (cinm) {
	case 'j':
		*pbmilch = true;
		break;
	case 'n':
		*pbmilch = false;
		break;
	default:
		cout << "Falsche Eingabe!\n";
		system("pause");
		UI_zusaetze_kaffee(beide, pbmilch, pbzucker);
		return;
	}
	PRINTVARIABLE(*pbmilch);
	return;
	if ((*pbmilch == true) && (*pbzucker == true)) {
		beide = true;
	}
	else {
		*pbmilch = false;
		*pbzucker = true;
	}
	PRINTVARIABLE(beide);
}

void SI(daten kaffee) {

	char pass[7] = { 'q', 'w', 'e', 'r', 't', 'z', '\0' };
	char passwort[7] = { '\0' };
	cout << "Bitte geben Sie das Passwort ein: ******\n";

	for (int i = 0; i < 6; i++) { //Passwort einlesen 
		passwort[i] = _getch();
		cout << "*";
	}
	bool pcheck = true;
	for (int i = 0; i < 6; i++) {
		if (passwort[i] != pass[i]) { //Ueberprueft ob Passwort falsch ist und wenn ja wird pcheck false zugewiesen
			pcheck = false;
		}
	}

	if (pcheck == true) { //Wenn pcheck gleich True ist, wird der Service-Mode angezeigt
		cout << "\nService-Interface\n";
		cout << "-----------------------------------------------\n";
		cout << "Noch vorhandene Mengen:\n";
		cout << "Kaffee :" << kaffee.vorrat_kaffee << " g Milch: " << kaffee.vorrat_milch << "ml\n";
		cout << "Espresso :" << kaffee.vorrat_espresso << " g Wasser: " << kaffee.vorrat_wasser << "ml\n";
		cout << "Zucker: " << kaffee.vorrat_zucker << " g\n";
		cout << "-----------------------------------------------\n";
		cout << "Mengen pro Tasse :\n";
		cout << "Kaffee: " << kaffee.menge_kaffee_pro_tasse << " g Milch: " << kaffee.menge_milch_pro_tasse << " ml\n";
		cout << "Espresso: " << kaffee.menge_espresso_pro_tasse << " g Wasser fr Kaffee: " << kaffee.menge_kaffee_pro_tasse << " ml\n";
		cout << "Zucker: " << kaffee.menge_zucker_pro_tasse << " g Wasser fr Espresso: " << kaffee.wasser_pro_tasse_espresso << " ml\n";
		cout << "-----------------------------------------------\n";
		system("pause");
	}
	else {
		cout << "Falsches Passwort! Zugang zum Service-Interface verweigert!\n";
		system("pause");
	}
}

float preis_berechnen(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten kaffee) {

	float preis = 0.0;
	if ((bkaffee == true) || (bespresso == true)) {
		preis += kaffee.preis_pro_tasse;
		if (bzucker == true) {
			preis += kaffee.preis_zutaten_pro_tasse;
		}
		if (bmilch == true) {
			preis += kaffee.preis_zutaten_pro_tasse;
		}
	}
	PRINTVARIABLE(preis);
	return preis;
}

void mengen_aktualisieren(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten* pkaffee) {

	if (bkaffee == true) {
		(*pkaffee).vorrat_kaffee = (*pkaffee).vorrat_kaffee - (*pkaffee).menge_kaffee_pro_tasse;	//Neue Menge von Kaffeebohnen
		(*pkaffee).vorrat_wasser = (*pkaffee).vorrat_wasser - (*pkaffee).wasser_pro_tasse_kaffee;
	}
	if (bespresso == true) {
		(*pkaffee).vorrat_espresso = (*pkaffee).vorrat_espresso - (*pkaffee).menge_espresso_pro_tasse;	//Neue Menge von Kaffeebohnen
		(*pkaffee).vorrat_wasser = (*pkaffee).vorrat_wasser - (*pkaffee).wasser_pro_tasse_espresso;
	}
	if (bmilch == true) {
		(*pkaffee).vorrat_milch = (*pkaffee).vorrat_milch - (*pkaffee).menge_milch_pro_tasse;	//Neue Menge von Kaffeebohnen
	}
	if (bzucker == true) {
		(*pkaffee).vorrat_zucker = (*pkaffee).vorrat_zucker - (*pkaffee).menge_zucker_pro_tasse;	//Neue Menge von Kaffeebohnen
	}
}