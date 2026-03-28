#include <iostream>
using namespace std;

int main() {
    int array[5];
    for (int i=0; i<5;i++)
    {
        cout<<"enter number: ";
        cin>>array[i];
    }
    cout << "The 1st element of the array is: " << array[0] << endl;
    cout << "The last element of the array is: " << array[4] << endl;    
    return 0;
}