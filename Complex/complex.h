#pragma once
#include<iostream>

using namespace std;

class complex {
public:
	complex()
	{
		real = 0;
		imaginaer = 0;
	}
	complex (int Real, int Imaginaer) : real(Real), imaginaer(Imaginaer)
	{}
	
	int get_a() { return real; }
	int get_b() { return imaginaer; }

	complex operator+ (const complex& b) {
		complex complexnum;
		complexnum.real = this->real + b.real;
		complexnum.real = this->imaginaer + b.imaginaer;
		return complexnum;
	}
	complex operator- (const complex& b) {
		complex complexnum;
		complexnum.real = this->real - b.real;
		complexnum.real = this->imaginaer - b.imaginaer;
		return complexnum;
	}
private:
	int real;
	int imaginaer;
};

int main() {
	return 0;
}

