#include <iostream>
#include "smartPointer.hpp"
int main() {
    int count;
    unique_ptr<int[]> arr = readNumbers(count);
    int sum = calculateSum(arr, count);
    cout << "The sum of the entered elements is: " << sum << endl;



    return 0;
}