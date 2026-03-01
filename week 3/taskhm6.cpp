#include<iostream>
using namespace std;
int main()
{
float bagpounds;
cout<<" Please enter weight of bag in pounds : " ;
cin>>bagpounds;
float bagcost;
cout<<" Please enter price of bag : " ;
cin>>bagcost;
float sizearea;
cout<<" Please enter sizearea,the bag can cover : " ;
cin>>sizearea;
int costperlb;
costperlb=bagcost/bagpounds;
cout<<" Cost of the fertilizer per pound : $"<< costperlb<<"\n";
int costperarea;
costperarea=bagcost/sizearea;
cout<<" Cost of the fertilizer per square foot : $"<< costperarea;
}

