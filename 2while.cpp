#include <iostream> 
using namespace std;
int main() {
	int sum = 0, count = 1, val;
	cout << "Enter the number till which sum has to be calculted\n";
	cin  >> val;
	
	
	while (count <= val) {
		sum += count;
		count += 1;
	}
	cout << "Sum of 1 to "<<val<< " = "<<sum;
	return 0;
}
