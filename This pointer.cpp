//references
#include <iostream>
using namespace std;

    
  class fruit{
      int k;
      public:
      void getdata(int k){
         this->k = k;
      }
  void display() {
      cout << k << endl;
      cout << this->k << endl;
      cout << (*this).k;
  }
  };

 main() {
      
      fruit a;
      a.getdata(87);
      a.display();
      return 0;
  }
