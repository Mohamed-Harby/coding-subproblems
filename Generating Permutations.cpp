// In the name of ALLAH the most Gracious the most Merciful
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

vector<vi> perms;
void generate_perm(vi &values, int perm_len,int index = 0){
	static vector<bool> visited(int(values.size()),0);
	static vi perm;
	if(index == perm_len){
		perms.push_back(perm);
		return;
	}
	for(int i=0;i<int(values.size());i++){
		if(visited[i])continue;
		perm.push_back(values[i]);
		visited[i] = true;
		generate_perm(values,perm_len,index+1);
		visited[i] = false;
		perm.pop_back();
	}
}

void print_perm(int num,int l){
	cout << "Number of permutations : "<< num << endl;
	for(int i=0;i<num;i++){
		for(int j=0;j<l;j++){
			cout << perms[i][j];
		}
		cout << '\n';
	}
}

int main() {
	// 1 --> 9
	// even number of 4 digits --> 6 * 7 * 8 * 4      ====  (6 * 7 * 8 * 9)*(4/9)	4 n.even_digits

	vector<int> v = {1,2,3,4,5,6,7,8,9};	// digits which will form the permutations
	int perm_length = 4;
	generate_perm(v, perm_length);
	int n = perms.size();
	print_perm(n,perm_length);

	return 0;
}
