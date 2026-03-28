#include<iostream>
using namespace std;
int main()
{
    int sum = 0, average = 0;
    int array[5] = {1,2,3,4,5};
    for (int idx=0;idx<5;idx++)
    {
        sum+=array[idx];
    }
    average = sum / 5;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}