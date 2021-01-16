// In the name of ALLAH the most Gracious the most Merciful
// O(log(n) * log(n))
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

vector<int> fact_big(int n) {
    vector<int> res;
    res.push_back(1);
    int res_size = 1;

    for (int i=2; i<=n; i++) {
    	int carry = 0;
    	for (int s=0; s<res_size; s++) {
            int temp = res[s]*i+carry;
   	        res[s] = temp % 10;
   	        carry  = temp/10;
   	    }
   	    while(carry){
   	        res.push_back(carry%10);
   	        carry /= 10;
   	        res_size++;
   	    }
    }
	reverse(res.begin(), res.end());
	return res;
}
void print_vector(vi b){
	auto it  = b.begin();
		while(it!= b.end()) cout << *it++ << " ";
	cout << endl;
}
int trailing_zeros_of_fact(int n){ // getting the trailing zeros of n!
	int i=5;		// number of trailing zeros of 128! is ==> 128/5 + 128/25 + 128/126
	int cnt = 0;
	while(n >= i){		// O(log(n))
		cnt+= n/i;
		i*=5;
	}
	return cnt;
}

int bin_search_fact(int s,int e,int val){ // getting the n which n! has val trailing zeros
	while(s <= e){		// O(log(n))
		int mid = s+(e-s)/2;
		if(trailing_zeros_of_fact(mid) == val)return mid;
		else if(trailing_zeros_of_fact(mid) > val) e = mid-1;
		else s = mid+1;
	}
	return -1;
}
vi get_factorials_with_n_trailing_zeros(int n){ // returns numbers with n trailing zeros
	vi res;
	int start = 5;
	int end = n*5;
	int value = bin_search_fact(start,end,n);

	if(value == -1){return res;}

	int t = 5;
	while(t--)	res.push_back(value++);
	return res;
}
int main() {
	vi res = get_factorials_with_n_trailing_zeros(10);
	print_vector(res);

	res = fact_big(45);
	auto it  = res.begin();
	while(it!= res.end()) cout << *it++;
	cout << endl;

	return 0;

}
