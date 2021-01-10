// In the name of ALLAH the most merciful the most gracious
#include <bits/stdc++.h>
using namespace std;

#define PREC(n)		cout << fixed <<  setprecision(n);
#define lol		ios_base::sync_with_stdio(NULL);cin.tie(NULL);
#define eps 1E-10
#define pi 	2*acos(0.0)
#define inf 1.797E308
#define ll long long

double Fact(double n){
	if(n == 1) return 1;
	return Fact(n-1) * n;
}

// Number of Digits = log10(n!)+1
//					= log10(1*2*3*.....*n)+1
//				    = log10(1)+log10(2)+log10(3)+.....+log10(n)+1
//                  =    0    +  0.3   +  0.77  +.....+log10(n)+1
int NumOfDigitsOfFact(int n){
	double res = 0;
	for(int i=1;i<=n ;i++){
		res += log10(i);
	}
	return int(res)+1;
}

int main() {
	PREC(0)
		cout << Fact(1) << endl;
		cout << NumOfDigitsOfFact(1) << endl;

		cout << Fact(22) << endl;
		cout << NumOfDigitsOfFact(22) << endl;

		cout << Fact(23) << endl;
		cout << NumOfDigitsOfFact(23) << endl;

		cout << Fact(24) << endl;
		cout << NumOfDigitsOfFact(24) << endl;

		cout << Fact(25) << endl;
		cout << NumOfDigitsOfFact(25) << endl;
		// factorial of 1, 22, 23 and 24 has number of Digits equal to their value 	==> NofDigitsOF(n!) == n
		cout << Fact(32) << endl;
		cout << NumOfDigitsOfFact(92) << endl;
}
// https://ideone.com/DuMD8p
