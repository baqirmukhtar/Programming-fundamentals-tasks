#include<iostream>
using namespace std;
int main()
{
int nom,fps,tnof;
cout<<" Number of minutes : " ;
cin>>nom;
cout<<" Frames per second : " ;
cin>>fps;
tnof=nom*fps*60;
cout<<" Total number of frames : "<< tnof;
return 0;
}