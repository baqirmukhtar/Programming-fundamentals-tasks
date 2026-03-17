//for loop
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter a Number: ";
    cin>>n;
    int sum=0;
    for(int x=n;x>0;x=x/10){
         d=x%10;
            sum=sum+d;
        
    } cout<<"Sum: "<<sum<<endl;
    return 0;
}