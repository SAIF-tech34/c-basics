
#include <iostream>
using namespace std;
int main() {
	int n1,n2,result;
	//cha
	 char operation;
	
	cout << "enter number  :" << endl;
	cin  >> n1;
	cout << "enter another number :" << endl;
	cin  >> n2;
	cout << "enter operation : (+-/*) "<< endl;
	cin  >> operation;
	
	switch(operation) {
		case '+':
		result = n1 + n2;
		cout << result;
		break;
		case '-':
		result = n1 - n2;
		cout << result;
		break;
		case '*':
		result = n1 * n2;
		cout << result;
		break;
		case '/':
			if(n2 != 0) {
				result = n1 / n2;
				cout << result;
			} else {
				cout << "error! division by zero is not allowed ";
			}
			break;
		default:
			cout << "invalid operation";
			//break;
}	return 0;
}