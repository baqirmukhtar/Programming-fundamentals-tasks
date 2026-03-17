#include<iostream>
using namespace std;
int main(){
    int n1,n2,sum=0;
    while(true){
        cout<<"Enter 1st Number: ";
        cin>>n1;
        cout<<"Enter 2nd Number: ";
        cin>>n2;
        sum=n1+n2;
        cout<<"Sum= "<<sum<<endl;
        if(n1<0 || n2<0){
            cout<<"Negative number entered!"<<endl;
            return 0;
        }
    }
    return 0;
}