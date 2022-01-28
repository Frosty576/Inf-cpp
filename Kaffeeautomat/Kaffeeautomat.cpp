#include <iostream>
#include <conio.h>
#include <cstring>
#include "Kaffeeautomat.h"
using namespace std;

int main() {
	daten kaffee{};
	kaffee.vorrat_kaffee = 1000;
	kaffee.vorrat_espresso = 1000;
	kaffee.vorrat_zucker = 500;
	kaffee.vorrat_milch = 1000;
	kaffee.vorrat_wasser = 5000;
	kaffee.menge_kaffee_pro_tasse = 5;
	kaffee.menge_espresso_pro_tasse = 5;
	kaffee.wasser_pro_tasse_kaffee = 125;
	kaffee.wasser_pro_tasse_espresso = 25;
	kaffee.menge_zucker_pro_tasse = 3;
	kaffee.menge_milch_pro_tasse = 30;
	kaffee.preis_pro_tasse = 1.0f;
	kaffee.preis_zutaten_pro_tasse = .1f;
	
	while (true) {

		bool bkaffee = false;
		bool bespresso = false;
		bool bzucker = false;
		bool bmilch = false;
		bool bservice = false;

		if (UI(&bkaffee, &bmilch, &bzucker, &bespresso, &bservice, kaffee) == false) {
			PRINTVARIABLE(bkaffee);
			PRINTVARIABLE(bmilch);
			PRINTVARIABLE(bzucker);
			PRINTVARIABLE(bespresso);
			PRINTVARIABLE(bservice);
			if (bservice == true) {
				SI(kaffee);
				continue;
			}
			if ((bkaffee == true) || (bespresso == true)) {
				float getraenkpreis = 0.0f;
				getraenkpreis = preis_berechnen(bkaffee, bmilch, bzucker, bespresso, kaffee);

				cout << "Bitte " << getraenkpreis << " Euro eingeben und ENTER dr\u0081cken\n"; //Ausgabe von gesamt Preis
				float geld;	//geld eingabe
				cin >> geld;
				if (geld >= getraenkpreis) {
					float rgeld = geld - getraenkpreis; //rÅ¸ckgeld
					cout << "Ihr GetrÑnk wird zubereitet.....\n";
					cout << "Bitte " << rgeld << " Euro R\u0081ckgeld und das GetrÑnk entnehmen -:)\n";
					system("pause");
				}
				else {
					cout << "Zu wenig Geld, Bestellung abgebrochen\n";
					system("pause");
					continue;
				}
			}
			mengen_aktualisieren(bkaffee, bmilch, bzucker, bespresso, &kaffee);
		}
		else {
			return 0;
		}
	}
}
