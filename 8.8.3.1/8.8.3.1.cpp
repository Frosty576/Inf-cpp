#include <iostream>
#include <thread>

using namespace std;

void t2(int x) {
	while (x > 0) {
		cout << x << endl;
		x = x--;
	}
}
void t1(int x) {
	
	while (x < 100) {
		cout << x << endl;
		x = x++;
	}
}

int main() {
	int x;
	cout << "Willkommen Benutzer." << endl
		<< "Bitte ein zwischen 0 und 100 eingeben" << endl;
	cin >> x;

	thread first(t1, x);
	thread second(t2, x);

	first.join();
	second.join();
	return 0;
}