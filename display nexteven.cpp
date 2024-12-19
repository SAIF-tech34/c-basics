#include <iostream>
using namespace std;
int main() {
	int  i;
	cout << "input any number :" << endl;
	cin >> i;
	 
	int  nextEven = (i % 2 == 0) ? (i + 2) : (i + 1);
	cout << "the next even of given number is: " << nextEven << endl;
	return 0; 
}