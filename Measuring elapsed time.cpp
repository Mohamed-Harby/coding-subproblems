#include <iostream>
#include<time.h>
#include<iomanip>

using namespace std;
#define PREC(n) cout << fixed << setprecision(n);

void fun() {	// logic
	for(int i=0;i<100000000;i++){
		cout << flush;
	}
}
int main() {
	clock_t s, e;
	// clock() returns the number of clock ticks elapsed since the program was launched
	s = clock();

	fun();	// logic

	e = clock();

	double elapsed = double(e-s);
	// to get the number of seconds used by the CPU, you will need to divide by CLOCKS_PER_SEC
	// CLOCKS_PER_SEC is 1000000 on typical 32 bit system

	elapsed /= double(CLOCKS_PER_SEC);

	PREC(3);
	cout << elapsed << " sec";

	return 0;
}
