#include<iostream>
using namespace std;
bool eligible(int age)
{
	return age>=18;
}
int main(){
int age;
cout<<"enter your age";
cin>>age;
if (eligible(age)){
	cout<<"you are eligible to vote";
}
else
{
	cout<<"you are not eligible";
}

return 0;
}
