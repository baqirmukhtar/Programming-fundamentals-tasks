#include<iostream>
using namespace std;
int main(){
    int money,year;
    int spend=0;
    int age=18;
    
    cout<<"Enter Inherited Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    
    for(int y=1800; y<=year; y++){
        int current_age = age + (y - 1800);
        
        if(y%2==0){
            spend = spend + 12000;
        }
        else{
            spend = spend + 12000 + (50 * current_age);
        }
    }
    
    int remaining = money - spend;
    
    if(remaining >= 0){
        cout<<"Yes! He will live a carefree life and will have "<<remaining<<" dollars left!"<<endl;
    }
    else{
        int need = spend - money;
        cout<<"He will need "<<need<<" dollars to survive!"<<endl;
    }
    
    return 0;
}