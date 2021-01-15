// In the name of ALLAH the most Gracious the most Merciful
#include <bits/stdc++.h>
using namespace std;
int cnt_primes_in_range_sieve(int n){
	vector<bool> primes(n+1,1);
	primes[0] = primes[1] = false;
	int cntSieve = 0;
	for(int i=2;i*i<= n;++i){
		if(primes[i]){
			for(int s = i*2;s <= n;s+=i) primes[s] = false; // Make all divisibles by i not primes
		}
	}
	
	for(int i=0;i<n+1;i++) {
		if(primes[i]) cntSieve++;
	}
	return cntSieve;
}


int main() {
	int res = cnt_primes_in_range_sieve(1000000);
	cout << res << endl;

	return 0;
}
