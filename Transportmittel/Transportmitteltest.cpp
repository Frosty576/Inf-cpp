#include "Transportmittel.h"

int main() {

	cout << "---------Transportmittel---------" << endl;
	Transportmittel box{ 2,3 };
	cout << box.get_hoehe() << endl;
	cout << box.get_breite() << endl;
	box.bewegen("links");

	cout << endl << "---------LandTransportmittel---------" << endl;
	LandTransportmittel* box1 = new LandTransportmittel{ 2,3,2 };
	cout << box1->get_hoehe() << endl;
	cout << box1->get_breite() << endl;
	cout << box1->get_radzahl() << endl;
	box1->bewegen("Rechts");
	box1->fahren(1000);
	box1->schieben(10);

	cout << endl << "---------WasserTransportmittel---------" << endl;
	WasserTransportmittel* box2 = new WasserTransportmittel{ 5,10,15 };
	cout << box2->get_hoehe() << endl;
	cout << box2->get_breite() << endl;
	cout << box2->get_bruttoregistertonnen() << endl;
	box2->bewegen("Vorne");
	box2->anlegen("Wilhelmshaven");
	box2->ablegen("Amsterdam");

	cout << endl << "---------Fahrrad---------" << endl;
	Fahrrad box3{ 4,3,2,6 };
	cout << box3.get_hoehe() << endl;
	cout << box3.get_breite() << endl;
	cout << box3.get_radzahl() << endl;
	cout << box3.get_anzahlgaenge() << endl;
	box3.bewegen("Rechts");
	box3.fahren(20);
	box3.schieben(5);
	box3.freihaendigfahren("John");
	
	cout << endl << "---------Rikscha---------" << endl;
	Rikscha box4{ 6,3,3,"rot" };
	cout << box4.get_hoehe() << endl;
	cout << box4.get_breite() << endl;
	cout << box4.get_radzahl() << endl;
	cout << box4.get_farbe() << endl;
	box4.bewegen("rueckwaerts");
	box4.fahren(15);
	box4.ziehen(2);
	box4.schieben(3);
	
	cout << endl << "---------Auto---------" << endl;
	Auto box5{ 5,2,4,10.5 };
	cout << box5.get_hoehe() << endl;
	cout << box5.get_breite() << endl;
	cout << box5.get_radzahl() << endl;
	cout << box5.get_spritverbrauch() << endl;
	box5.bewegen("Links");
	box5.fahren(15);
	box5.schieben(3);
	box5.tanken(5);
	
	delete box1;
	delete box2;
	return 0;
}