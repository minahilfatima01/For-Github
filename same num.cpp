#include<iostream>
using namespace std;
int main(){
	int arr[4];
	cout<<"enter 4 numbers";
	for(int i=0;i<=4;i++){
		cin>>arr[i];
	}
	
	bool output= false;
	for(int i=0;i<=3; i++){
		if(arr[i]==3&&arr[i+1]==3){
			output=true;
			
		}
		
	}
	cout<<output<<"true" """false";
	return 0;
}
