#include<iostream>
using namespace std;
int main()
{
string name;
int dis,tic;
cout<<" Country : " ;
cin>>name;
cout<<" Ticket price : " ;
cin>>tic;
if(name=="Ireland"){
dis=tic*0.10;
}
else{
dis=tic*0.05;
}
int dis_tic=tic-dis;
cout<< "Discounted price "<< dis_tic;
}







