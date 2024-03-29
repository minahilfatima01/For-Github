#include<iostream>
using namespace std;
int max(int num1,int num2,int num3){
	int maxnum=num1;
	if(num2>maxnum){
		maxnum=num2;}
		if(num3>maxnum){
		maxnum=num3;
	}
	return maxnum;
		
	}
	int min(int num1,int num2,int num3){
		int minnum=num1;
		if(num2<minnum){
			minnum=num2;
		}
		if(num3<minnum){
			minnum=num3;
		}
		return minnum;
	}
int main(){
	int num1, num2, num3;
	cout<<"enter three numbers";
	cin>>num1>>num2>>num3;
	int maxnum=max(num1, num2, num3);
	int minnum=min(num1,num2,num3) ;
	cout<<"maxnum"<<maxnum<<endl;
	cout<<"minnum"<<minnum<<endl;
	return 0;
	
	
	
	
}
