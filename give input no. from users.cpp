#include <iostream>
using namespace std;
int main() {
	int num1,num2,num3,sum1;
	
	cout << "Enter first number :";
	cin >> num1;
	cout << "Enter second number :";
	cin >> num2;
	cout << "third :";
	cin >> num3;
	sum1 = num1 + num2 + num3;
	
//	cout << "sum of "<< num1 << "and " << num2 <<" is :" << sum1 << "\n" ;
   cout << "result1 :" <<sum1 << endl;
   int num4, num5, sum2;
    
   cout << "Enter third number  :";
   cin  >> num3;
   
   cout << "Enter fourth number :";
   cin  >>  num4;
   
    sum1 = num1 + num2;
    sum2 = num3 + num4;
    
	cout << "sum of "<< num3 << "and " << num4 <<" is :" << sum2 << endl;
	
	return 0;
}
