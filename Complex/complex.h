#pragma once
#include<iostream>
#include<math.h>

using namespace std;

class complex {
private:
	double real;
	double imaginaer;
public:
	complex()
	{
		real = 0.0;
		imaginaer = 0.0;
	}
	complex (double Real, double Imaginaer) : real(Real), imaginaer(Imaginaer)
	{}

	double get_real() { return real; }
	double get_imaginaer() { return imaginaer; }

	void set_real(double r) {
		real = r;
	}
	void set_imaginaer(double i) {
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
	complex operator/ (const complex& b) {
		complex complexnum;
		try {
			if (b.real == 0 && b.imaginaer == 0) {
				throw overflow_error("Invalid Argument");
			}
			complexnum.real = ((this->real * b.real) + (this->imaginaer * b.imaginaer)) / (pow(this->imaginaer, 2) + pow(b.imaginaer, 2));
			complexnum.imaginaer = ((this->imaginaer * b.real) - (this->real * b.imaginaer)) / (pow(b.real, 2) + pow(b.imaginaer, 2));		
		}
		catch(overflow_error& e) {
			cout << e.what() << endl;
		}
		return complexnum;
	}

	friend ostream& operator<< (ostream& os, complex& num);
	friend istream& operator>> (istream& is, complex& num);
};

ostream& operator<< (ostream& os, complex& num) {
	if (num.imaginaer >= 0.0) {
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



