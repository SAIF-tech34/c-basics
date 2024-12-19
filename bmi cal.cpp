#include <iostream>
using namespace std;
int main() {
float  weight, height, bmi;
	cout << "Input  weight in kg's \n";
	cin >> weight;
	cout << "Input height in meters\n";
	cin >> height;
	
	bmi = weight/ (height*height);  //else if (bmi <= 18.5 && bmi < 24.9)
       if (bmi < 18.5) {
       	cout << "underweight\n";
	   } else if (bmi >= 18.5 && bmi < 24.9) {
	   	cout << "normal weight\n";
	   } else if (bmi >= 25 && bmi < 29.9) {
	   	cout << "overweight\n";
	   } else if (bmi >= 30) {
	   	cout << "obese";
	   } else {
	   	cout << "Invalid input\n";
	   }
	   cout << "your bmi is " << bmi;
     return 0;
}



/*BMI < 18.5: Underweight
18.5 <= BMI < 24.9: Normal weight
25 <= BMI < 29.9: Overweight
BMI >= 30: Obese*/