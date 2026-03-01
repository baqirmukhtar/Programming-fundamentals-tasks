#include<iostream>
using namespace std;
int main()
{
float vppk;
cout<<" Enter vegetable price per kilogram (in coins) : " ;
cin>>vppk;
float fppk;
cout<<" Enter fruit price per kilogram (in coins) : " ;
cin>>fppk;
int tkv,tkf;
cout<<" Enter total kilograms of vegetables : " ;
cin>>tkv;
cout<<" Enter total kilograms of fruits : " ;
cin>>tkf;
int teir;
teir=((vppk*tkv)+(fppk*tkf))/1.94;
cout<<" Total earning in rupees(Rps) : "<<teir;
return 0;
}
