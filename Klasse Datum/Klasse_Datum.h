#pragma once
#include <iostream>

class Datum {
private:
	int tag;
	int monat;
	int jahr;
	int KlassenNummer;
	static int KlassenZaehler;
public:
	Datum() {
		tag = 0;
		monat = 0;
		jahr = 0;
		KlassenNummer = 0;
	}

	Datum(int Tag, int Monat, int Jahr) : tag{ Tag }, monat{ Monat }, jahr{ Jahr }
	{
		if (KlassenZaehler > 9) {
			std::cout << "Sie versuchen zu viele Objekte der Klasse zu instanzieren" << std::endl;
			system("pause");
			return;
		}
		KlassenNummer = ++KlassenZaehler;
		std::cout << KlassenNummer << std::endl;	
	}

	~Datum()
	{}
	
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
			return TagDesJahres;
		}
	
};