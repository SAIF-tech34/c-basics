
#include <iostream>
using namespace std;
class teacher{
  public:
 void info();
 void display();
};
  void teacher::info() {
      cout << "Function no 1\n";
  }
  void teacher::display() {
      cout << "Function no 2\n";
  }

int main() {
    
    teacher a;
    a.info();
    a.display();
    
}
