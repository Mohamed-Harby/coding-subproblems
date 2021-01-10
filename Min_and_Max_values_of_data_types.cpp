// In the name of ALLAH the most Merciful the most Gracious
#include <bits/stdc++.h>
using namespace std;

#define PREC(n)		cout << fixed <<  setprecision(n);
#define lol		ios_base::sync_with_stdio(NULL);cin.tie(NULL);
#define eps 1E-10

template<typename T>
void getMinMax(){
	cout << "Min : " << numeric_limits<T>::min() << endl;
	cout << "MAX : " << numeric_limits<T>::max() << endl;
	cout << endl;
}

int main(){
  lol
	cout << "int, \n";
	getMinMax<int>();

	cout << "float, \n";
	getMinMax<float>();

	cout << "double, \n";
	getMinMax<double>();
}
