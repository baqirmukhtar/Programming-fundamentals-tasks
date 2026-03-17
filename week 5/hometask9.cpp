//for loop
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Enter the digit to check: ";
    cin>>d;
    int count=0;
    for(int x=n;x>0;x=x/10){
        if(x%10==d){
            count++;
        } 
    } cout<<"Frequency: "<<count<<endl;
    return 0;
}