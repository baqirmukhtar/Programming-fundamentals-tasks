#include<iostream>
using namespace std;

int main()
{
    int number, digit, count = 0;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter digit to find frequency: ";
    cin >> digit;

    while(number > 0)
    {
        int rem = number % 10;

        if(rem == digit)
        {
            count++;
        }

        number = number / 10;
    }

    cout << "Frequency = " << count;
}