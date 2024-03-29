#include <iostream>
using namespace std;
void EvenOdd(int number)
{
	if(number % 2 == 0)
	{

	cout<<number<<"is even";
		}
	else {
		cout<<number<<"is odd";
	}
 
}
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	EvenOdd(num);
 return 0;
}
