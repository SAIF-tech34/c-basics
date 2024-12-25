#include <iostream> 
using namespace std;
int main() {
	
	int num_1;
	
	cout << "input any number :";
	cin  >> num_1;
	                               
	if (num_1 % 2 == 0) {     // odd = 1, 3, 5, 7
		cout << num_1 << " is even." << endl;
	}  else {
		cout << num_1 << "is odd." << endl;
	}
  return 0;
}
