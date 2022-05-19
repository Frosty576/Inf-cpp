#include "Transportmittel.h"

int main() {
	Transportmittel box{ 2,3 };
	cout << box.get_hoehe() << endl;
	cout << box.get_breite() << endl;
	box.bewegen("links");
	
	LandTransportmittel* box1 = new LandTransportmittel{ 2,3,2 };
	box1->bewegen("Rechts");
	box1->fahren(1000);
	box1->schieben(10);


	WasserTransportmittel* box2 = new WasserTransportmittel{ 5,10,15 };
	box2->bewegen("Vorne");
	box2->anlegen("Wilhelmshaven");
	box2->ablegen("Amsterdam");

	delete box1;
	delete box2;
	return 0;
}