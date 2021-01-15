// In the name of ALLAH the most Gracious the most Merciful
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

double factorialDivision(int n,int m){  // O(n*m)
	vi numerator;
	vi denominator;
	double res = 1;
	for(int i=2;i <= n;i++) numerator.push_back(i);
	for(int i=2;i <= m;i++) denominator.push_back(i);

	for(int i=0;i<m-1;i++){
		for(int j=0;j<n-1;j++){
			if(__gcd(denominator[i],numerator[j]) == denominator[i]){
				numerator[j]/=denominator[i];
				denominator[i] = 1;
				break;
			}
		}
	}
	for(int i=0;i<n-1;i++) res*=numerator[i];
	for(int i=0;i<m-1;i++) res*=denominator[i];

	return res;
}

int main() {
	cout << factorialDivision(5, 3) << endl;    // 20

	cout << factorialDivision(17, 16) << endl;    // 17

	cout << factorialDivision(13, 5) << endl;   // 5.18918e+07
  
  cout << factorialDivision(1000, 999) << endl; // 1000
}
// https://ideone.com/ZdC7cb
