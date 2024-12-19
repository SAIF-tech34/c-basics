#include <iostream>
using namespace std;

 main() {
   int n, sum = 0;
   char choice;cout << "input a number\n";
   cin >> n;
   
   cout << "Do you want to add sum or even (o/e) :\n";
   cin  >> choice;
   
   if (choice == 'o' || choice == 'O') {
       for (int i = 1;i<=n; i += 2) {
           sum += i;
       }
           cout << "sum of all odd numbers between 1 to " << n << "=" << sum;
       } 
       else if (choice == 'e'|| choice=='E'){
      for (int i = 2; i<=n; i+=2) {
          sum += i;
      }
      cout << "sum of all even numbers between 1 to " << n << "=" << sum;
       }
       else {
           cout << "invalid input \n";
       }
    return 0;
}
