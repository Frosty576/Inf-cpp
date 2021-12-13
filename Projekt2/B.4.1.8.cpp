#include <iostream>;

using namespace std;

int main() {

	int l ;
	double laenge{ 100.05 };
	char zeichen;
	l = (int)laenge;
	zeichen = (char)laenge;
	cout << laenge << " " << l << " " << zeichen << endl;
	float messlatte{777.77};
	laenge = static_cast<double>(messlatte);
}