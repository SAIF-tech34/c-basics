#include <iostream>
using namespace std;
int main () {
	wchar_t ch =L'Ã';
	wcout << (int)ch << endl;
	cout << sizeof(wchar_t) << endl;
	return 0;
}