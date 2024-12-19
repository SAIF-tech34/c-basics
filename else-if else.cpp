#include <iostream>
using namespace std;
int main() {
	int len, breadth;
	cout << "enter the values of length and breadth";
	cin  >> len >> breadth;
	
	if (len == breadth) {
		cout << "it is a square";
	}
	else 
		cout << "it is a rectangle";
	
//	else 
//	cout << "Invalid input";
	return 0;
}