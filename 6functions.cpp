#include <iostream>
using namespace std;
  int divideNumbers(int x, int y, int z) {
  int answer = x / y / z;
  return answer;
}
int main() {
	cout << divideNumbers(21, 4, 92);
	return 0;
} 

