#include <string>
#include <iostream>
using namespace std;

int main() {
   std::string password;
    
  do {
      cout << "enter a password \n";
       cin >> password;
    if (password == "C++Rocks!") {
        cout << "Access granted ";
    } else {
        cout << "Incorrect pasword! try again";
    } 
  } while (password != "C++Rocks!");
    return 0;
}

