#include<iostream>
using namespace std;

int main()
{
    int numbers[3] = {24, 50, 29};

    for(int j = 0; j < 3; j++)
    {
        cout << "\nMultiplication Table of " << numbers[j] << endl;

        for(int i = 1; i <= 10; i++)
        {
            cout << numbers[j] << " x " << i << " = " << numbers[j] * i << endl;
        }
    }
}