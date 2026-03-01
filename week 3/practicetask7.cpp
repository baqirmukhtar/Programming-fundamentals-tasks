#include<iostream> 
using namespace std;
int main()
{
int pa,wd,hei,wp;
cout<<" Enter paint area : " ;
cin>>pa;
cout<<" Enter width : " ;
cin>>wd;
cout<<" ENter height : " ;
cin>>hei;
wp=pa/(wd*hei);
cout<<" Walls painted= "<<wp;
return 0;
}
