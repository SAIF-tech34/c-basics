 #include <iostream>
 #include <ctype.h>
using namespace std;
main() {
	// integer takes 4 bytes
	double y[34];
	double *yptr;
	yptr = y;
	cout << "Address of yptr is " << yptr << endl;
	yptr++;
	cout << "address is " << yptr;
}
