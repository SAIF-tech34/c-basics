#include <iostream>
using namespace std;
int main()
{
	int num, n, factorial = 1;
	cout << "input number\n";
	cin >> n;
	num = n;
	if (n == 0) {
		cout << "factorial is 1";
	}	else {
	while(num > 0) {
		factorial *= num; //factorial = factorial * num
		num--;
}
	}
	    cout << "Factorial of " << n << " is " << factorial << endl;
  return 0;
	}
