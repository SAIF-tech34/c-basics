#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cout << "input number :\n";
	cin >> n;
	for (int i = 1; i <=n;  i += 2 ){
	//	if ( i % 2 == 0)
		 {
		sum += i;// sum = sum + i;
	} 
}
   	cout << "sum of  all even number's 1 to "<< n << " = "<< sum <<endl;
	return 0;
}