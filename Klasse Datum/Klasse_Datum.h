#pragma once
#include <iostream>

class Datum {
private:
	int tag;
	int monat;
	int jahr;
public:
	Datum() {
		tag = 0;
		monat = 0;
		jahr = 0;
	}

	Datum(int Tag, int Monat, int Jahr) : tag{ Tag }, monat{ Monat }, jahr{ Jahr }
	{}

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
		int tageProMonat[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int tageProMonatIstSchalt[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int TagDesJahres = 0;
		if (IstSchaltjahr(jahr) == 1) {
			for (int i = 0; i < (monat - 1); i++) {
				TagDesJahres += tageProMonatIstSchalt[i];
			}
		}
		if (IstSchaltjahr(jahr) == 0) {
			for (int i = 0; i < (monat - 1); i++) {
				TagDesJahres += tageProMonat[i];
			}
		}
		TagDesJahres = TagDesJahres + tag;
		return TagDesJahres;
	}
};