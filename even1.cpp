#include <iostream>
using namespace std;

int main() {
     cout << "Even numbers between 1 and 100" << endl;
    
    for(int i = 1; i <= 100; ++i) {

        if(i % 2 == 0) {
            
        cout << i ;
        }
    }
    
    return 0;
}
