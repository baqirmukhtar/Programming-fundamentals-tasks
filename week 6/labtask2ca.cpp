#include <iostream>
using namespace std;

int main() {
    int array[5];
    cout << "Enter 5 integers: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    cout << "The 2nd element of the array is: " << array[1] << endl;
    cout << "The 4th element of the array is: " << array[3] << endl;
    return 0;
}