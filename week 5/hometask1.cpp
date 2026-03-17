// #include<iostream>
// using namespace std;
// int main(){
//     char choice='y';
//     while(choice!='n' && choice!='N'){
//         cout<<"I am Happy!"<<endl;
//     cout<<"Enter your choice: ";
//     cin>>choice;
//     }
// }

////////////////////
#include<iostream>
using namespace std;
int main(){
    char choice;
    while(true){
        cout<<"I am Happy!"<<endl;
        cout<<"Enter your choice (y/n): ";
        cin>>choice;
        if(choice=='n' || choice=='N')
            break;
    }
    return 0;
}