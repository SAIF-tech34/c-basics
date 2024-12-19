#include <iostream>
using namespace std;
int main() {
int n, count=0, temp;
cout<<"Enter to check"<<endl;
cin>>n;
temp=n;
while(temp>0) // if n = 7 then how it works
{
	if(n%temp==0)
	{
		count++;
	}
	temp--;
	}
	if(count==2)
	{
		cout<<"P";
		
		}
		else
		cout<<"NP";	
	return 0;
}