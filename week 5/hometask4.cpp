#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int x=1;x<=5;x++){
        sum=x+sum;
    }cout<<sum;
    return 0;
}