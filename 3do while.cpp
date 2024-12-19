#include <iostream>
using namespace std;
int main() {
	char choice;
	do {
		cout << "menu\n";
		cout << "1.Pizza\n";
		cout << "2.Karahi\n";
		cout << "3.Biryani\n";
		cout << "Enter choice between 1 to 3\n";
		int option;
		cin >> option;
	 switch (option){
		case 1:
		cout << "You select Pizza\n";
		  break;
		  case 2:
		cout << "You select Karahi\n";
		break;
		  case 3:
		cout << "YOu select biryani\n";
		break;
         default:
         	cout << "invalid option\n";
	}
	cout << "Do you want to choose again? (yes/no)\n";
	cin  >> choice;
}  while (choice == 'y' || choice == 'Y');
  cout << "Good bye \n";
  return 0;
}