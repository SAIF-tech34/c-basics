// factorial 5*4*3*2*1
//     120  24  6  2
#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 2, n;
	cout << "input number for factorial"<<endl;
	cin  >> n;
	while (n > 1) {
		a *= b;
		b += 1;
		n -= 1;
	}
	cout << "factorial of input value is "<<a<<endl;
	return 0;
}