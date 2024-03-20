#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 5, 8, 20, 15};
    
    int max = 0;
    
    for(int i = 1; i<5 ; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    std::cout << "The greatest element in the array is " << max << endl;

    return 0;
}
