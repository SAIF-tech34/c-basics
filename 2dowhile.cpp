//write a program that sum all input numbers by the user.
#include <iostream>
using namespace std;
int main() {
	int num;
	int sum = 0;
	do {
		cout << "Enter a number Or (0 to stop)";
		cin  >> num;
		sum += num;
	} while  ( num != 0);
	 cout << "The total sum is "<< sum << "." << endl;
	 return 0;
}
