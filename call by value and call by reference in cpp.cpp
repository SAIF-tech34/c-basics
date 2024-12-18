#include <iostream>
using namespace std;
void swappointer(int *c, int *d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}
int main() {
	int a = 4, b = 5;
	cout << "Value of a " << a << endl << "Value of b " << b << endl;
	swappointer(&a, &b);
	
	cout << "Value of a " << a << endl << "value of b " << b << endl;
//	return 0;
}
