#include <iostream>
using namespace std;
int square(int num);
int main () {
	int num = 0, result = 0;
	cout << "Input number to calculate its square" << endl;
    cin >> num;
    result = square(num);
    cout << "Square of " << num << " is " << result << endl;
    return 0;
}
int square(int num) {
	return(num*num);
}