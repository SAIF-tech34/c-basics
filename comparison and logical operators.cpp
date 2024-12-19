#include <iostream>
using namespace std;
int main() {
	int a(7), b(3);
	//comparison operator
	cout << "if a is equal to b than :" << (a == b) << endl; //() calleed paranthesis
	cout << "if a is lesser to b :" << (a <= b)  << endl;
	cout << "if a is greater to b :" << (a >= b) << endl;
	cout << "if a is not equal to b :"  << (a != b) << endl;
	
	// Logical operators
	cout << "the value of this logical operator in c++ :" << ((a == b) && (a<b)) << endl;
	cout << "the value of this logical operator in c++ :"    << ((a != b) || (a > b))  << endl;
	cout << "the value of this logical operator in c++ :" << (!(a <= b)) << endl;
	return 0;
	
}