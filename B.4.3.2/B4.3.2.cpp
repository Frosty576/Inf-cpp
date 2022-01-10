#include<iostream>
using namespace std;

int main()
{
	int i, j;
	
	i = 0; j = -5;
	if (i++ || j++) ++i; // Wenn i oder j inkrementiert werden, wird i vorher inkrementiert. In C++ wird 0 als falsch behandelt. In i++ ist der Wert von i=0, im Ausdruck wird 'if(0)' verwendet und wird zu false. Daher wird der zweite Teil des ODER-Ausdrucks ausgewertet und führt zu i = 2 und j = -4.
	cout << i << ',' << j << endl;
	i = 1; j = -5;
	if (i++ || j++) ++i; // Wenn i oder j inkrementiert werden, wird i vorherig inkrementiert. Hier ist i = 1. Da der erste Operand als true ausgewertet wird, wird nur der erste Teil des Ausdrucks betrachtet. i wird also zunächst nachherig inkrementiert. Da es inkrementiert wird, wird es vorherig inkrementiert. Deshalb ist i = 3 und j = -5.
	cout << i << ',' << j << endl;
	i = 0; j = -5;
	if (i++ && j++) ++i; // Wenn i und j inkrementiert werden, wird i vorherig inkrementiert. Hier is i = 0.  Da der erste Operand als false ausgewertet wird, wird nur der erste Teil des Ausdrucks betrachtet. i wird nachherig inkrementiert und dies fuhrt zu i = 1 und j = -5.
	cout << i << ',' << j << endl;
	i = 1; j = -5;
	if (i++ && j++) ++i; // Wenn i und j inkrementiert werden, wird i vorherig inkrementiert. Hier is i = 1.  Da der erste Operand als true ausgewertet wird, wird der zweite Ausdruck bewertet. i wird also nachherig inkrementiert, dann vorher inkrementiert und dann wird j inkrementiert als auch i wieder. Dies fuhrt zu i = 3 und j = -4.
	cout << i << ',' << j << endl;
	}