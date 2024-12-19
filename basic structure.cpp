#include <iostream>
#define PI 3.1415
int r = 2;

  void area();
  
  class MyClass  {
      public:
      int a;
      void display() 
      std::cout << "Inside class" << std::endl;
  };
      int main() {
          MyClass m;
          m.a = 90;
          m.display();
      }
        void area() {
            float area;
            area = PI*r*r;
            std::cout << "area" << std::endl;
        }