#include<iostream>
using namespace std;
int main(){
	int size=10;
	int number[size];
	cout<<"Enter 10 numbers";
	for(int i=0;i<10;++i){
		cin >> number[i];
		
	}

	  cout << "Numbers in reverse order" << endl;
    for (int i = size - 1; i >= 0; --i) {
        cout << number[i] ;
    }
    cout << endl;

    return 0;

}
