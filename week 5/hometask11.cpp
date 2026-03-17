#include<iostream>
using namespace std;
int main(){
    int n1,n2,gcf,lcf;
    cout<<"Enter Number 1: ";
    cin>>n1;
    cout<<"Enter Number 2: ";
    cin>>n2;
    for(int x=1;x<=n1 && x<=n2;x++){
        if(n1%x==0 && n2%x==0){
    gcf=x;
    }}
    lcf=(n1*n2)/gcf;
    cout<<"GCF: "<<gcf<<endl;
    cout<<"LCF: "<<lcf<<endl;
    return 0;
}