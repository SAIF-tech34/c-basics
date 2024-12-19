#include <iostream>
using namespace std;
int main () {
	int n1,n2,r= 0;
	char op,choice;

	do {
		cout << "enter the first number\n";
		cin  >> n1;
		cout << "enter the second number\n";
		cin  >> n2;
		cout << "Enter operation +,-,*,/\n";
		cin  >> op;
		bool validOperation = true;
		switch (op) {
			case '+':
				r = n1 + n2;
				break;
		    case '-':
		       r = n1 - n2;
		       break;
		    case '*':
		     r = n1 * n2;
		      break;
		      case '/':
		      if (n2 == 0) {
		      	cout << "Error division by zero not allowed :\n";
		      	validOperation = false;
			  } else {
			  	r= n1/n2;
			  }
		break;
			default:
				cout << "Invalid operation\n";
				validOperation = false;
				break;
		}
		if (validOperation) {
			cout << "The result is " << r << endl;
		}
		  cout << "Do you want to perform another calculations ";
		  cin  >> choice;
	} while (choice == 'y'|| choice == 'Y');
		cout << "Goodbye!";
		return 0;
}