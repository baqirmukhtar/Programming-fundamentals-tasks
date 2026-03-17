#include<iostream>
using namespace std;
int main()
{
string shape;
cout<<" Enter shape : " ;
cin>>shape;
float s1,s2,area;
if(shape=="square"){
cout<<" Enter length : " ;
cin>>s1;
area=s1*s1;
}
if(shape=="rectangle"){
cout<<" Enter length and width : " ;
cin>>s1>>s2;
area=s1*s2;
}
if(shape=="circle"){
cout<<" Enter radius : " ;
cin>>s1;
area=3.14*s1*s1;
}
if(shape=="triangle"){
cout<<" Enter base and height : " ;
cin>>s1>>s2;
area=0.5*s1*s2;
}
cout<< "Area: "<<area;
}





