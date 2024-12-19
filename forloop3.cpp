#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cout << "input value :\n";
	cin >> n;
	
	for (int i = 1;  i<=n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
      	cout << "sum of all odd from 1 to"<<n<< "=" << sum;
      	return 0;
}