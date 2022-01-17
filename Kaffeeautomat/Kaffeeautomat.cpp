#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main() {

	int kb = 1000; //Kaffeebohnen vorratsmenge
	int eb = 1000; //Espressobohnen vorratsmenge
	int w = 5000; //Wasser vorratsmenge
	int m = 1000; //Milch vorratsmenge
	int z = 500;  //Zucker vorratsmenge
	int km = 5;	// Kaffeemenge pro tasse
	int em = 5; // Espressomenge pro tasse
	int wmk = 125; // Wassermenge pro tasse Kaffee
	int wme = 25; // Wassermenge pro tasse Esspresso
	int mm = 30; // Milchmenge pro tasse
	int zm = 3; // Zuckermenge pro tasse
	int kp = 1; // Kaffeepreis
	int ep = 1; // Espressopreis
	float mp = .1f; //Milchpreis
	float zp = .1f; //Zuckerpreis
	float gp = 0; //getränk preis
	char pass[7] = { 'q', 'w', 'e', 'r', 't', 'z', '\0'};
	char passwort[7] = {'\0'};
	

	while (true) {

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
			cout << "Sie haben sich f\u0081r die Auswahl Kaffee entschieden.\n";
			kb = kb - km;	//Neue Menge von Kaffeebohnen
			w = w - wmk;	//Neue Menge von Water
			gp = gp + kp;	//Preis von Kaffee
			break;
		case 'e':
			cout << "Sie haben sich f\u0081r die Auswahl Espresso entschieden.\n";
			eb = eb - em;	//Neue Menge von Espressobohnen
			w = w - wme;	//Neue Menge von Water
			gp = gp + ep;	//Preis von Espresso
			break;
		case 's':
		{
			cout << "Bitte geben Sie das Passwort ein: ******\n";

			for (int i = 0; i < 6; i++) { //Passwort einlesen 
				passwort[i] = _getch();
				cout << "*";
			}

			string p1 = { passwort };
			string p2 = { pass };
			
				if (p1 != p2) { //Ueberprueft ob Passwort richtig ist
					cout << "Falsches Passwort! Zugang zum Service-Interface verweigert!\n"; 
					system("pause");
				}

				else {
					cout << "\nService-Interface\n";
					cout << "-----------------------------------------------\n";
					cout << "Noch vorhandene Mengen:\n";
					cout << "Kaffee :" << kb << " g Milch: " << m << "ml\n";
					cout << "Espresso :" << eb << " g Wasser: " << w << "ml\n";
					cout << "Zucker: " << z << " g\n";
					cout << "-----------------------------------------------\n";
					cout << "Mengen pro Tasse :\n";
					cout << "Kaffee: " << km << " g Milch: " << mm << " ml\n";
					cout << "Espresso: " << em << " g Wasser fr Kaffee: " << wmk << " ml\n";
					cout << "Zucker: " << zm << " g Wasser fr Espresso: " << wme << " ml\n";
					cout << "-----------------------------------------------\n";
					system("pause");
				}
		}
		continue;
		
		default:
			cout << "Falsche Eingabe!\n";
			system("pause");
			continue;
		}

			cout << "M”chten Sie Zucker (j/n)?\n";
			char cinz; // (j/n) Zucker eingabe
			cin >> cinz;
			switch (cinz) {
			case 'j':
				z = z - zm;		//(Zucker vorrat - Zucker pro Tasse)
				gp = gp + zp;	//(Getränk preis + Zucker Preis)
			case 'n':
				break;
			default:
				cout << "Falsche Eingabe!\n";
				gp = 0;
				system("pause");
				continue;	//Falls eingabe falsch ist, 'continue' (Züruck an Anfang der While schleife)
			}

			cout << "M”chten Sie Milch (j/n)?\n";
			char cinm; // (j/n) Milch eingabe
			cin >> cinm;
			switch (cinm) {
			case 'j':
				m = m - mm;		//Milch vorrat - Milch pro Tasse
				gp = gp + mp;	//(Getränk preis + Milch Preis)
			case 'n':
				break;
			default:
				cout << "Falsche Eingabe!\n";
				gp = 0;
				system("pause");
				continue;	//Falls eingabe falsch ist, 'continue' (Züruck an Anfang der While schleife)
			}

			cout << "Bitte " << gp << " Euro eingeben und ENTER dr\u0081cken\n"; //Ausgabe von gesamt Preis
			float geld;	//geld eingabe
			cin >> geld;
			if (geld >= gp) {
				float rgeld = geld - gp; //rückgeld
				cout << "Ihr Getr„nk wird zubereitet.....\n";
				cout << "Bitte " << rgeld << " Euro R\u0081ckgeld und das Getr„nk entnehmen -:)\n";
				system("pause");
			}
			else {
				cout << "Zu wenig Geld, Bestellung abgebrochen\n";
				gp = 0;
				system("pause");
				continue;
			}
			gp = 0;
		}
		return 0;
	}
