#include<iostream>
using namespace std;
int main()
{

float matric, fsc, ECAT, aggregate;
cout<<" Enter your matric marks : " ;
cin>>matric;
cout<<" Enter your intermediate marks : " ;
cin>> fsc;
cout<<" Enter your ECAT marks : " ;
cin>> ECAT;
aggregate =(matric/1100*17)+(fsc/1200*50)+(ECAT/400*33);
cout<< "your aggregate is : "<< aggregate;


}