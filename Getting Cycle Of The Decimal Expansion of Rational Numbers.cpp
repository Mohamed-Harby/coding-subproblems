// In the name of ALLAH the most merciful the most gracious
#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool getInput(int &a, int &b){
	cout << "Enter the Numerator : ",cin >> a;
	cout << "Enter the denominator : ",cin >> b;
	return (cin.good());
}

int main() {
	map <int ,int> remainders;
	vector<int> values;
	int x,y;

	while(getInput(x,y)){
		remainders.clear(),values.clear();

		int rem = (x % y)*10;
		int i = 0;
		while(!remainders.count(rem)){
		remainders[rem] = i++;
		values.push_back(rem / y);
		rem = (rem % y) *10;
		}
		int first_index_of_cycle = remainders[rem];

		cout << x <<"/"<< y <<" = "<< x/y <<".";

		int it = 0;
		//print what is before the cycle
		while(it < first_index_of_cycle) cout << values[it++];

		//print the cycle
		cout << '(';
		while(it < i) cout << values[it++];
		cout << ")\n";

		int sycleLength = i-first_index_of_cycle;
		cout << "Number of digits in repeating cycle is "<< sycleLength << endl;
		
	}
}
