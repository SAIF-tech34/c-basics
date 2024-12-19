#include<iostream>
#include<iomanip>
using namespace std;
main() {
	double r,n1 = 434.399, n2 = 34.44;
	r = n1/n2;
	cout<<setprecision(5)<<r<<endl;
	cout<<setprecision(2)<<r<<endl;
	cout<<setprecision(3)<<r<<endl;
	cout<<setprecision(4)<<r<<endl;
	cout<<setprecision(1)<<r<<endl;
}