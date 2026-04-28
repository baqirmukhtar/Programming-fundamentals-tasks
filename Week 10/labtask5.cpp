#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int basenumber, exponent;
    cout << "Enter base number: ";
    cin>>basenumber;
    cout << "Enter exponent: ";
    cin>>exponent;
    cout << "Result: " << pow(basenumber, exponent);
    return 0;
}