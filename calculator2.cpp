#include<iostream>
using namespace std;
int main(){
	char op;
	float num1,num2;
	cout<<"enter the operator(+,-,*,/)";
	cin>>op;
	cout<<"enter two numbers";
	cin>>num1;
	cin>>num2;
	if(op=='+'){
		cout<<num1+num2;
	}
else
if(op=='-'){
	cout<<num1-num2;
}
	else if(op=='*'){
		cout<<num1*num2;
	}
	else
	if(op=='/'){
		cout<<num1/num2;
	}
	else{ cout<<"not found";
	}
	
}
