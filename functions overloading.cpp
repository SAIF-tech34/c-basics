//functins overloading
#include <iostream>
using namespace std;

void print (int i) {
		cout << i << "\n";
	}
 void print (double j) {
		cout << j;
	}
void print(char* k) {
		cout << "value of string is " << k;
	}
	int main() {
		int i = 100;
		double j = 33.34;
		char *k = "This is a test string\n";
	print(*k);
}
