int i, k, n;

i = 101, k = 5, n = 10;
while (i > 0) k = 2 * k; // W�hrend i gr��er null ist, wird k mit 2 multipliziert. Da i sich nie �ndert, wird der Schleife unendlich ausgef�hrt.

i = 101, k = 5, n = 10;
while (i != 0) i = i - 2; // W�hrend i ungleich 0 ist, wird i - 2 berechnet. Da i mit eine ungerade Zahl anf�ngt und mit eine gerade Zahl subtrahiert wird, wird es immer ungleich null bleiben. Der Schleife wird sich unendlich lang ausf�hren.

i = 101, k = 5, n = 10;
while (n != i) { // W�hrend n ungleich i ist, wird i vorherig inkrementiert und n wird den Wert 2 * i zugewiesen. Da n immer das doppelte von i sein wird, wird n immer ungleich i sein, welche zu eine unendliche Schleife f�hrt.
	++i;
	n = 2 * i;