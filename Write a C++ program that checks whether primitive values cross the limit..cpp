#include <iostream>
using namespace std;
int main() {
	cout << "weather the permitive values crossing the limit or not" << endl;
	cout << "--------------------------------------------------------" << endl;
	//Declaring and initializing various types data variable
	
	char           gender        = 'F';
	bool           isEmployed    = true;
	unsigned short  numOfsons     = 1;     
    int     yearofAppt    = 2009;
	 int   YearlyPackage = 150000;
	double         height        = 79.48;
	float          gpa           = 4.6946365343543;
	long           totalDrawn    = 634756398349589348589;
	long long      balance       = 35736429475898738LL;
	
	//Outputting values of variable
	cout << "The gender is           :" << gender         << endl;
	cout << "Is she married          :" << isEmployed     << endl;
	cout << "Number of sons she has  :" << numOfsons      << endl;
	cout << "Yeat of her appointment :" << yearofAppt     << endl;
	cout << "The salary of year      :" << YearlyPackage  << endl;
	cout << "Height of employee      :" << height         << endl;
	cout << "The result is           :" << gpa            << endl;
	cout << "Salary Drawn up to      :" << totalDrawn     << endl;
	cout << "Balance till            :" << balance        << endl;
	return 0;
}
