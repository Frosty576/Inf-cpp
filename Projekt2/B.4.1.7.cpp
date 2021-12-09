#include <iostream>;
#include <sstream>;
using namespace std;

int main() {

	cout << "Bitte ihre Name und Vorname eingeben:" << endl;
	string name;
	string vorname;
	cin >> name >> vorname;
	cin.clear();

	cout << "Bitte ihre Postleitzahl und dann ihre Wohnort eingeben:" << endl;
	string Wohnort;
	int postleitzahl;
	cin >> postleitzahl >> Wohnort;
	cin.clear();

	cout << "Bitte ihre Strassenname und dann ihre Hausnummer eingeben:" << endl;
	string strasse;
	int hausnummer;
	cin >> strasse >> hausnummer;
	cin.clear();

	string str_post;
	string str_haus;

	//konvertiert int zu string
	ostringstream wandler;
	wandler << postleitzahl;
	str_post = wandler.str();

	ostringstream wandler1;
	wandler1 << hausnummer;
	str_haus = wandler1.str();

	string ausgabe = "\n" + vorname + " " + name + "\n" + str_post + " " + Wohnort + "\n" + strasse + " " + str_haus;
	cout << ausgabe << endl;
	system("pause");
}