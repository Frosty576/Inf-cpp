#include <iostream>
#include "Klasse_Datum.h"
using namespace std;

bool Datum::Flag{ false };
int Datum::KlassenZaehler{0};
int main() {
	
	Datum::Plappern(true);

		Datum heute{ 2,5,2020 };
		Datum e1{ 1, 1, 1 };
		Datum e2{ 1, 1, 1 };
		Datum e3{ 1, 1, 1 };
		Datum e4{ 1, 1, 1 };
		Datum e5{ 1, 1, 1 };
		Datum e6{ 1, 1, 1 };
		Datum e7{ 1, 1, 1 };
		Datum e8{ 1, 1, 1 };
		Datum e9{ 1, 1, 1 };
		Datum e10{ 1, 5, 1 };

		std::cout << Datum::IstSchaltjahr(4) << std::endl;
		std::cout << heute.IstSchaltjahr(100) << std::endl;
		std::cout << heute.IstSchaltjahr(400) << std::endl;
		std::cout << heute.TagDesJahres() << std::endl;
		std::cout << e9.TagDesJahres() << std::endl;
		
		system("pause");
		return 0;
	
}