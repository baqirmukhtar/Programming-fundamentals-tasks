#include<iostream>
using namespace std;
int main(){
    int n1,n2,n,f;
    n1=0;
    n2=1;
    cout<<"Enter length of Fibonacci Series: ";
    cin>>f;
    cout<<n1<<","<<n2<<",";
    for(int x=1;x<=f-2;x++){
        n=n1+n2;
        n1=n2;
        n2=n;
        cout<<n<<",";
    }
    return 0;
}