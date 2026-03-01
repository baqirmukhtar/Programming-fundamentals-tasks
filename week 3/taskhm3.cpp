#include<iostream>
using namespace std;
int main()
{
float initialvelocity,acceleration,time,finalvelocity;
cout<<" Enter the initialvelocity : " ;
cin>>initialvelocity;
cout<<" Enter the acceleration : " ;
cin>>acceleration;
cout<<" Enter the time : " ;
cin>>time;
finalvelocity=(initialvelocity+acceleration*time);
cout<<" the finalvelocity is :"<< finalvelocity;
}
