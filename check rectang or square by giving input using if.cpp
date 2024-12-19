#include <iostream>
using namespace std;
int main() {
	int len, breadth;
	cout << "enter length"  << endl;
	cin >> len;
	cout << "enter breadth" << endl;
	cin >> breadth ;
	
	if (len == breadth) {
		cout  << "square";
	} else
		cout << "rectangle";
  
	return 0;
	
}