#include<iostream>
using namespace std;

int main()
{
    int pin;
    int balance = 1000;
    int choice, amount;

    for(int i=1;i<=3;i++)
    {
        cout<<"Enter PIN: ";
        cin>>pin;

        if(pin==1234)
        {
            cout<<"Login Successful\n";

            cout<<"1 Check Balance\n2 Deposit\n3 Withdraw\n4 Exit\n";
            cin>>choice;

            if(choice==1)
            {
                cout<<"Balance = "<<balance;
            }

            else if(choice==2)
            {
                cout<<"Enter amount: ";
                cin>>amount;

                balance += amount;
                cout<<"New Balance = "<<balance;
            }

            else if(choice==3)
            {
                cout<<"Enter amount: ";
                cin>>amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    cout<<"Remaining Balance = "<<balance;
                }
                else
                {
                    cout<<"Insufficient Balance";
                }
            }

            else if(choice==4)
            {
                return 0;
            }

            break;
        }
        else
        {
            cout<<"Wrong PIN\n";
        }
    }
}