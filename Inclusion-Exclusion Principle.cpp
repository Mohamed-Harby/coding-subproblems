// In the name of ALLAH the most Merciful the most Gracious
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>


// Inclusion-Exclusion iterative function Works only with specific number of divisibles (4 here)
int InclusionExclusion_iterative(vi &div,int val){
	int res = 0;	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				for(int l=0;l<2;l++){
					int cnt = i+j+k+l;
					if(cnt == 0)continue;
					int tot = 1;
					if(i) tot *= 2;
					if(j) tot *= 3;
					if(k) tot *= 5;
					if(l) tot *= 7;
					tot *= cnt%2 == 0? -1:1;
					int enter = val/tot;
					res+=enter;
				}
			}
		}
	}
	return res;
}

// Inclusion-Exclusion recursive function Works only with n number of divisibles
int InclusionExclusion_recursive(vi &div,int val,int n,int index = 0,int d = 1, int sign = -1){
	if(index == n){
		if(d == 1) return 0;
		else return sign * val / d;
	}
	return InclusionExclusion_recursive(div,val,n,index+1,d,sign) +
		     InclusionExclusion_recursive(div,val,n,index+1,d*div[index],sign*-1);
}



int main() {

	vi v = {2,3,5,7}; // divisables
	int res = InclusionExclusion_iterative(v, 100);
	cout << res << endl;  // 78

	res = InclusionExclusion_recursive(v, 100,4);
	cout << res << endl;  // 78
	return 0; 
}




