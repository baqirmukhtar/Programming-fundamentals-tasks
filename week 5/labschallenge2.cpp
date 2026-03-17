#include<iostream>
using namespace std;

int main()
{
    string username, password;
    string studentName, courseName;
    int age;
    int choice;

    for(int i=1;i<=3;i++)
    {
        cout<<"Enter Username: ";
        cin>>username;

        cout<<"Enter Password: ";
        cin>>password;

        if(username=="admin" && password=="1234")
        {
            cout<<"Login Successful\n";

            cout<<"1 Add Student\n2 View Student\n3 Add Course\n4 Exit\n";
            cin>>choice;

            if(choice==1)
            {
                cout<<"Enter Student Name: ";
                cin>>studentName;

                cout<<"Enter Age: ";
                cin>>age;
            }

            else if(choice==2)
            {
                cout<<"Student Name: "<<studentName<<endl;
                cout<<"Age: "<<age<<endl;
            }

            else if(choice==3)
            {
                cout<<"Enter Course Name: ";
                cin>>courseName;
            }

            else if(choice==4)
            {
                return 0;
            }

            break;
        }
        else
        {
            cout<<"Wrong Credentials\n";
        }
    }
}