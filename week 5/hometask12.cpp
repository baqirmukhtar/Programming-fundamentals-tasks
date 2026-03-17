#include<iostream>
using namespace std;
int main(){
    int n,num;
    double p1=0,p2=0,p3=0,p4=0,p5=0;
    
    cout<<"Enter count of numbers: ";
    cin>>n;
    
    cout<<"Enter "<<n<<" numbers:"<<endl;
    for(int i=1; i<=n; i++){
        cin>>num;
        
        if(num<200){
            p1++;
        }
        else if(num>=200 && num<400){
            p2++;
        }
        else if(num>=400 && num<600){
            p3++;
        }
        else if(num>=600 && num<800){
            p4++;
        }
        else{
            p5++;
        }
    }
    
    p1 = (p1/n)*100;
    p2 = (p2/n)*100;
    p3 = (p3/n)*100;
    p4 = (p4/n)*100;
    p5 = (p5/n)*100;
    
    cout<<"p1: "<<p1<<"%"<<endl;
    cout<<"p2: "<<p2<<"%"<<endl;
    cout<<"p3: "<<p3<<"%"<<endl;
    cout<<"p4: "<<p4<<"%"<<endl;
    cout<<"p5: "<<p5<<"%"<<endl;
    
    return 0;
}