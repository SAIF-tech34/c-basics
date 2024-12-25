#include <iostream>
using namespace std;

int main() {
	int d = 0, a = 1, n;
	cout << "Input Odd integers\n";
	cin >> n;
	do {
		d += a*a;
		a += 2;
	} while (a <= n);
	cout << "Sum of all odd integers is " << d << endl;
	return 0;
}
