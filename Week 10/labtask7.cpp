#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int distance,angle;
    cout<< "Enter distance: ";
    cin>>distance;
    cout<< "Enter the angle: ";
    cin>>angle;
    float radian = 0.0174 *angle;
    float height = distance * tan(radian);
    cout <<"Answer is : "<<height <<endl;

    
}