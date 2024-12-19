#include <iostream>
using namespace std;
int main() {
	int i;
	cout << "The value of integer for the while loop is :";
	cin  >> i;
	while (i <= 10) {
		cout << "This Loop will run according to given condition\n";
		i = i + 1;
	}
		return 0;
}