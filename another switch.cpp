#include <iostream>
using namespace std;
int main() {
   char gender;
    cout << "input gender" << endl;
    cin >> gender ;
    
    switch(gender) {
        case 'm':
        cout << "Ellegibe for apply :" << endl;
        break;
       case 'f' :
       cout << "Ellegibe for apply" << endl;
       break;
       default:
       cout << "invalid ";
       return 0;
}
    }