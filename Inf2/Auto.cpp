#include <iostream>
#include "Auto.h"

Auto renault{ 4, "rot", 1000, 5, 5.0f, 100.0f, 100 };

int main() {

	Auto bmw{ 4, "rot", 1000, 5, 5.0f, 50.0f, 100 };
	

	Auto* volkswagen = new Auto{ 4, "blau", 300, 5, 10.0f, 200.0f, 200 };
	delete volkswagen;



	system("pause");
	return 0;
}