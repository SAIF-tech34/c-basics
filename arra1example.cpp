#include <iostream> 
using namespace std;

int main() {
    int a[100];
    
    // Initialize the array with values from 0 to 99
   // for (int i = 0; i < 100; i++) {
     //   a[i] = i;
   // }
    
    cout << "Please enter a positive integer (0-99):\n";
    int z;   // Example input: 10
    cin >> z;
    
    int found = 0;
    int index = -1; // Variable to store the index of the found integer
    
    // Search for the integer in the array
    for (int i = 0; i < 100; i++) {
        if (z == a[i]) {
            found = 1;
            index = i; // Store the index where the integer was found
           // break;
        }
    }
    
    // Output the result
    if (found == 1) {
        cout << "We found the integer at index: " << index << endl;
    } else {
        cout << "Index not found" << endl;
    }
    
    return 0;
}
