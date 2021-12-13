#include<iostream> 
#include<string>
using namespace std;

int main() {

	int a = 2;
	int b = 1;

	a = b = 2;
	cout << a << endl;

	a = 5 * 3 + 2;
	cout << a << endl;

	a = 5 * (3 + 2);
	cout << a << endl;

	a *= 5 + 5;
	cout << a << endl;

	a %= 2 * 3;
	cout << a << endl;

	a = !(--b == 0);
	cout << a << endl;

	a = 0 && 0 + 2;
	cout << a << endl;

	a = b++ * 2;
	cout << a << endl;

	a = -5 - 5;
	cout << a << endl;

	a = -(+b++);
	cout << a << endl;

	a = (5 == 5) && (0 || 1);
	cout << a << endl;

	a = ((((((b + b) * 2) + b) && b || b)) == b);
	cout << a << endl;

	a = b + ++b;
	cout << a << endl;

	a = sizeof(int) * sizeof(a);// 4 4 = 16
	cout << a << endl;

	system("pause");

	return 0;
}