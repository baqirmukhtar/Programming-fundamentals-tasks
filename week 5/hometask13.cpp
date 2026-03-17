//Weeeeeeeeeeeee--------------------------------------------
#include<iostream>
using namespace std;
int main(){
    int age,price,toy;
    cout<<"Enter lilly's age: ";
    cin>>age;
    cout<<"Enter price of washing machine: ";
     cin>>price;
    cout<<"Enter unit price of each toy: ";
    cin>>toy;

    int money_receive=10;
    int money=0;
    int toys=0;
    int total;
    for(int x=1;x<=age;x++){
        if(x%2==0){
            money=money+(x*5)-1;
        }
        else{
            toys++;
        }
         total=money+(toy*toys);

    }if(total>=price){
    cout<<"Yes!"<<endl;
    cout<<total-price<<endl;
    }
    else{
        cout<<"No!"<<endl;
        cout<<price-total<<endl;
    }

    return 0;
}