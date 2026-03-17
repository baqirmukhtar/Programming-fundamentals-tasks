#include<iostream>
using namespace std;
int main(){
int multiple,t;
cout<<"Enter table for: ";
cin>>t;
for(int x=1;x<=10;x++){
    multiple=x*t;
    cout<<t<<"*"<<x<<"="<<multiple<<endl;
}
    return 0;
}