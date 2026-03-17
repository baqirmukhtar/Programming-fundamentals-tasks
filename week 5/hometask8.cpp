// #include<iostream>
// using namespace std;
// int main(){
//     int digit=0,n;
//     cout<<"Enter Number: ";
//     cin>>n;
//     for(int x=n;x>0;x=x/10){
//         digit=digit+1;
//     }cout<<"Total number of digits are: "<<digit;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n,digit=0;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int x=n;x>0;x=x/10){
        digit=digit+1;
    }
    cout<<"Digits Number is: "<<digit<<endl;
    return 0;
}
//0 is not counting itself a digit