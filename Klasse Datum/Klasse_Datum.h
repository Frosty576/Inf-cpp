#pragma once
#include <iostream>
using namespace std;
class Datum {
private:
	int tag;
	int monat;
	int jahr;
	int KlassenNummer;
	static bool Flag;
	static int KlassenZaehler;

public:
	Datum() {
		tag = 0;
		monat = 0;
		jahr = 0;
		KlassenNummer = 0;
		if (Flag == true) {
			cout << "Standardkonstruktor von Objekt Nummer " << KlassenNummer << endl;
		}
	}

	Datum(int Tag, int Monat, int Jahr) : tag{ Tag }, monat{ Monat }, jahr{ Jahr }
	{
		if (KlassenZaehler > 9) {
			std::cout << "Sie versuchen mehr als 10 Objekte der Klasse zu instanzieren" << std::endl;
			KlassenNummer = ++KlassenZaehler;
			system("pause");
			return;
		}

		KlassenNummer = ++KlassenZaehler;

		if (Flag == true) {
			cout << "Allgemeinerkonstruktor von Objekt Nummer " << KlassenNummer << " mit den Attributen (" << tag << ", " << monat << ", " << jahr << ") " << endl;
			cout << "Addresse : " << getIdentity() << endl;
		}
	}

	~Datum()
	{
		if (Flag == true) {
			cout << "Destuktor von Objekt Nummer " << KlassenNummer << endl;
		}
	}
	
		static int IstSchaltjahr(int irgendeinJahr) {
			
			if ((irgendeinJahr % 4 == 0) && (irgendeinJahr % 100 != 0) || (irgendeinJahr % 400 == 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		
		int TagDesJahres() {
			IstSchaltjahr(jahr);
			int tagProMonat[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			int tagProMonatIstSchalt[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			int TagDesJahres = 0;
			if (IstSchaltjahr(jahr) == 1) {
				for (int i = 0; i < (monat - 1); i++) {
					TagDesJahres += tagProMonatIstSchalt[i];
				}
			}
			if (IstSchaltjahr(jahr) == 0) {
				for (int i = 0; i < (monat - 1); i++) {
					TagDesJahres += tagProMonat[i];
				}
			}
			TagDesJahres = TagDesJahres + tag;

			if (Flag == true) {
				cout << "Die Methoden IstSchaltjahr() und IstSchaltjahr() werden von Objekt " << KlassenNummer << " aufgerufen." << endl
					 << "Ergebnisse: " << IstSchaltjahr(jahr) << " fuer IstSchaltjahr() und " << TagDesJahres
					 << " fuer TagDesJahres(). " << endl;
			}
			return TagDesJahres;
		}

		 static void Plappern(bool flag) { // flag kann sein true oder false
			 Flag = flag;
				 	
		} 
		int getTag() const { return tag; }
		int getMonat() const { return monat; }
		int getJahr() const { return jahr; }
		Datum * getIdentity() { return this; }
};