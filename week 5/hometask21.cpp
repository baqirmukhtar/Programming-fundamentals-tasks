#include<iostream>
using namespace std;
int main(){
  for(int x=5;x>=1;x--){
    for(int j=5;j>=x;j--){
        cout<<j<<" ";
    }cout<<endl;
  }

    return 0;
}
/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 */


//for other one-----------------------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//   for(int x=5;x>=1;x--){
//     for(int j=5;j>=x;j--){
//         cout<<x<<" ";
//     }cout<<endl;
//   }

//     return 0;
// }
// 5 
// 4 4 
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1 