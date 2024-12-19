#include <iostream> 
using namespace std;
int main() {
	int count = 1, sum = 0;
	while (count <= 11) {
		sum =+ count; // same as sum = sum + count
		count = count + 1;
	}
	cout << "sum of 1 to 10 = " <<sum << endl;
	return 0;
}