//calculator===============================
#include<iostream>
using namespace std;
int main(){
    int n1,n2,choice;
    char opp;
    cout<<endl<<"---------Simple Calculator------------"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Clear Screen"<<endl;
    cout<<"6.Exit"<<endl;

    cout<<"Enter you choice(1-6): ";
    cin>>choice;
    if(choice==1){
     cout<<"Enter first number: ";cin>>n1;
     cout<<"Enter second number: ";cin>>n2;
     cout<<"Result: "<<n1+n2<<endl;
    }
    else if(choice==2){
        cout<<"Enter first number: ";cin>>n1;
     cout<<"Enter second number: ";cin>>n2;
     cout<<"Result: "<<n1-n2<<endl;
    }
    else if(choice==3){
        cout<<"Enter first number: ";cin>>n1;
     cout<<"Enter second number: ";cin>>n2;
     cout<<"Result: "<<n1*n2<<endl;
    }
    else if(choice==4){
        cout<<"Enter first number: ";cin>>n1;
     cout<<"Enter second number: ";cin>>n2;
     cout<<"Result: "<<n1/n2<<endl;
    }
    else if(choice==5){
        cout<<"Screen Cleared! "<<endl;
        system("clear");
    return 0;

    }
    else if(choice==6){
        cout<<"Exit! "<<endl;
     return 0;
    }
    else{
        cout<<"Invalid credentials!"<<endl;
        return 0;
    }
  return 0;
}