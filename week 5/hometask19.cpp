//method 1-------------------------------------1-----------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cout<<"Enter rows: ";cin>>m;
//     cout<<"Enter columns: ";cin>>n;
//   for(int x=1;x<=m;x++){
//     for(int j=1;j<=x;j++){
//         cout<<" *" ;
//     }cout<<endl;
//   }

//     return 0;
// }

//my other method-----------------------------2-------------
#include<iostream>
using namespace std;
int main(){
  for(int x=1;x<=3;x++){
    for(int j=1;j<=x;j++){
        cout<<" *" ;
    }cout<<endl;
  }

    return 0;
}