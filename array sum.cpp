#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int sum = 0;

    // Taking input from the user
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Calculating the sum of the numbers
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
    }

    // Printing the sum
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
