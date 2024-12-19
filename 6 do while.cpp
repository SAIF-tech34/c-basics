#include <iostream>
#include <string>
using namespace std;
int main() {
	int num1, num2, r;
	char op,choice;
	do {
		cout << "Enter a integer for calculatioins\n";
		cin >> num1;
		cout << "Enter another integer for calculation\n";
		cin >> num2;
		cout << "Enter a operation (+,-,/,*) :";
		cin >> op;
		switch (op) {
			case '+':
			cout << "Enter a operation";
			r = num1 + num2;
			break;
				case '-':
			cout << "Enter a operation";
			r = num1 - num2;
			break;
	        case '*':
			cout << "Enter a operation\n";
			r = num1 * num2;
			break;
            case '/':
            	if (num2 != 0) {
            			r = num1/num2;
				} else {
				cout << "Error division by zero not allowed\n";
                   continue;	
				}
				break;
			default:
				cout << "Invalid operation\n";
	}
	   cout << "The result is : " << r << endl;
	    cout << "Do you want to performa another calculations?(y,n) :\n";
	    cin  >> choice;
	         continue;
			} 
				while (choice == 'y' || choice == 'Y');
					cout << "Goodbye!";
			     return 0;
}