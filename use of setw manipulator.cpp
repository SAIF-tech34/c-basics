//write a program that explains the use of setw manipulator
#include <iostream>
#include <iomanip>
using namespace std;

 int main() {

int assign  = 4284;
float asign = 91.5;
char str[] = "OOP USING C++";
cout<<setw(5)<<assign<<endl;
cout<<setw(8)<<asign<<endl;
cout<<setw(16)<<str<<endl;
return 0;
}
 /*
  4284
    91.5
   OOP USING C++
*/