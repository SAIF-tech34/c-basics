// Constructor have not any data type 
// That's why we don't need to call a function
// Utility functions are private but they can use outside the class
#include <iostream>
using namespace std;

class teacher{
	public:
	teacher(string ownername) {
		cout << "I am teaching on Youtube\n"<<ownername<<"\n";
	}
};
int main() {
	teacher f("SAIF ULLAH");
	teacher g("OOPs");
}
