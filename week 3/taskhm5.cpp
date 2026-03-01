#include<iostream>
using namespace std;
int main()
{
string name;
cout<<" Enter the name : " ;
cin>>name;
float targetweightloss;
cout<<" Enter the targetweightloss : " ;
cin>>targetweightloss;
float dailycaloriedeficit;
cout<<" Enter the dailycaloriedeficit : " ;
cin>>dailycaloriedeficit;
int daystoloseweight;
daystoloseweight=(targetweightloss*3500/dailycaloriedeficit);
cout<<" the daystoloseweight is :"<< daystoloseweight;
}