#include<iostream>
using namespace std;
int main()
{
cout<<" Enter current world population : " ;
int population;
cin>>population;
cout<<" Enter monthly birth rate : " ;
int birthrate;
cin>>birthrate;
int futurepopulation=population+(birthrate* 360);
cout<<"population in three decades will be: "<<futurepopulation;
}