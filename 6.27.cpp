//write a program that displays product of all odd num from 1 to 10 using for loop
#include <iostream>
using namespace std;
int main() {
	//it depends on you weather you initialize variable in for syntax or not
	
	
	
	for (int product = 1, x = 1;x <= 10; x = x+2) { // x = x+2
	         product = product*x;
	cout << "product = "<<  product << endl; // product = product*x //1
	}
	return 0;
}