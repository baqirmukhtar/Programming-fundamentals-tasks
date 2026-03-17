// #include <iostream>
// using namespace std;
// int main(){
//     int n,num=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=n;i>0;i=i/10){
//         num=num+1;
//     }
//     cout<<"The number of digits is: "<<num<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int num,digits=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int x=num;x>0;x=x/10){
        digits=digits+1;
    }cout<<"The number of digits is: "<<digits<<endl;
    return 0;
}