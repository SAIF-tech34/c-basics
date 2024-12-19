#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a(9);         // no initializer (default initialization)
int b = 5;     // initial value after equals sign (copy initialization)
int c( 6 );    // initial value in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d { 7 };   // initial value in braces (direct list initialization)
int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
int f {878};      // initializer is empty braces (value initialization)
cout << a << endl;
cout  << b << endl;
 cout  << c << endl;
 cout  << d << endl;
 cout  << e << endl;
 cout << f << endl;
    return 0;
}