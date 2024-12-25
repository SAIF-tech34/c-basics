#include <iostream>
using namespace std;
int main() {
	
	 struct num {
	 	char mno[39];
	 	char xyz[98];
	 	
	 };
	 
	num i = {"AI with", "Saif ullah"};
	num *k;
	k = &i;
	
	cout <<(*k).mno;
	cout << k->mno;
	cout << k->xyz;

}
