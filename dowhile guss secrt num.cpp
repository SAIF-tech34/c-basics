#include <iostream>
using namespace std;
int main() {
    int n;
    char play;
	do {
  cout << "guess the secret number between 1 and 10\n\n";
  cin >> n;
    
    if (n < 7) {
        cout << "Too low!Try again\n\n";
    } else if (n > 7){
        cout << "Too high!Try again\n\n";
	} else {
	    cout << "Congratulation! you guess the secret number";
	}
	cout << "do you want to play again\n\n";
	cin  >> play;
	} while (play=='y'|| play =='Y');
	cout << "Goodbye!";
	return 0;
}