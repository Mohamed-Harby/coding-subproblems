// In the name of ALLAH the most Gracious the most Merciful
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

double Choose(int n,int k){	// returns aCb
	vi numerator;
	vi denominator;
	double res = 1;
	for(int i=2;i <= n;i++) numerator.push_back(i);
	for(int i=2;i <= k;i++) denominator.push_back(i);
	for(int i=2;i <= n-k;i++) denominator.push_back(i);

	for(int i=0;i<int(denominator.size());i++){
		for(int j=0;j<int(numerator.size());j++){
			if(__gcd(denominator[i], numerator[j]) == denominator[i])
				{numerator[j] /= denominator[i],denominator[i] = 1; break;}
		}
	}

	for(int i=0;i<int(numerator.size());i++) res*=numerator[i];
	for(int i=0;i<int(denominator.size());i++) res/=denominator[i];

	return res;
}

double factorialDivision(int n,int m){  // O(n*m)
	vi numerator;
	vi denominator;
	double res = 1;
	for(int i=2;i <= n;i++) numerator.push_back(i);
	for(int i=2;i <= m;i++) denominator.push_back(i);
	int minimum = min(n,m);
	--minimum;
	for(int i=0;i<minimum;i++){
			if(denominator[i]==numerator[i]){
				denominator[i]=numerator[i]=1;
			}
			else break;
	}
	for(int i=0;i<n-1;i++) res*=numerator[i];
	for(int i=0;i<m-1;i++) res/=denominator[i];

	return res;
}

int main() {
	cout << Choose(10, 3) << endl;
	cout << Choose(10, 6) << endl;
  
  return 0;
}
