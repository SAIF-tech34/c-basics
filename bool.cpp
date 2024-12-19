// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int a=33;
   float g = 3.8;
   float z= a + true + false +g;
  cout << z << endl;
  cout << sizeof(bool) << endl;
   if((a<g)==true) {
       cout << "a is lesser" << endl;
   }
   else {
       cout << "g is lesser";
   }
    return 0;
}