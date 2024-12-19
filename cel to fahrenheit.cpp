#include <iostream>
using namespace std;
int main() {
	int c,f;
	cout <<  "enter temperature in celsius so it will become converted into fahrenheit :" << endl;
	cin >> c;
	f = (c*9/5) +32;
	cout << c << " celsius degree = " << f << " fahrenheit";
	return 0;
}//F = (C x 9/5) + 32
