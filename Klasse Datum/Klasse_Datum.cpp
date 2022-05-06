#include <iostream>
#include "Klasse_Datum.h"

int main() {

	Datum heute{ 2,5,2022 };
	std::cout << heute.IstSchaltjahr(4) << std::endl;
	std::cout << heute.IstSchaltjahr(100) << std::endl;
	std::cout << heute.IstSchaltjahr(400) << std::endl;
	std::cout << heute.TagDesJahres() << std::endl;

	system("pause");
	return 0;
}