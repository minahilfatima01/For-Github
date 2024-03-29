#include<iostream>
using namespace std;
int product(int num1, int num2){
int multiply=num1*num2;
cout<<"product";
return num1*num2;
}
int main(){
	int num1,num2;
		cout<<"enter the value of num1"<<endl;
	cin>>num1;
		cout<<"enter the value of num2;"<<endl;

	cin>>num2;

	cout<<"product of"<<num1<<"and"<<num2<<"is"<<endl;
cout<<	product(num1, num2);
	




}

