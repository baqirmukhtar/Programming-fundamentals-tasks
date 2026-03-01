#include<iostream>
using namespace std;
int main()
{
float impostercount,playercount,chance;
cout<<" Enter the impostercount : " ;
cin>>impostercount;
cout<<" Enter the playercount : " ;
cin>>playercount;
chance=(impostercount/playercount*100);
cout<<" the chance is :"<< chance;
}
