#include <iostream>
using namespace std;
int main() {
    cout<<"How many numbers you want to store: ";int n ; cin>>n;
    int array[n];
    for (int i=0; i<n;i++)
    {
        cout<<"enter number: ";
        cin>>array[i];
    }
    cout<< "The elements of the array is: ";
    for (int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}