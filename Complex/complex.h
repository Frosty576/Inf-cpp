#pragma once
#include<iostream>

using namespace std;

class complex {
private:
	int real;
	int imaginaer;
public:
	complex()
	{
		real = 0;
		imaginaer = 0;
	}
	complex (int Real, int Imaginaer) : real(Real), imaginaer(Imaginaer)
	{}

	int get_real() { return real; }
	int get_imaginaer() { return imaginaer; }

	void set_real(int r) {
		real = r;
	}
	void set_imaginaer(int i) {
		imaginaer = i;
	}
	complex operator+ (const complex& b) {
		complex complexnum;
		complexnum.real = this->real + b.real;
		complexnum.imaginaer = this->imaginaer + b.imaginaer;
		return complexnum;
	}
	complex operator- (const complex& b) {
		complex complexnum;
		complexnum.real = this->real - b.real;
		complexnum.imaginaer = this->imaginaer - b.imaginaer;
		return complexnum;
	}
	friend ostream& operator<< (ostream& os, complex& num);
	friend istream& operator>> (istream& is, complex& num);
};

ostream& operator<< (ostream& os, complex& num) {
	if (num.imaginaer >= 0) {
		os << num.real << "+" << num.imaginaer << "i";
		return os;
	}
	else {
		os << num.real << num.imaginaer << "i";
		return os;
	}
}
	istream& operator>> (istream & is, complex & num) {
		cout << "reale Teil" << endl;
		is >> num.real;
		cout << "imaginaer Teil" << endl;
		is >> num.imaginaer;
		return is;
	}



