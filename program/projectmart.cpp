#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // Data Stuctures

    // main header of mms
    while (true)
    {
        system("cls");
        cout << "|------------------------------------|" << endl;
        cout << "|-------Mart Management System-------|" << endl;
        cout << "|------------------------------------|" << endl;
        cout << " \"Welcome to Azlan Mart\" \n";
        cout << "How can we help you sir/madam \n";
        cout << "--------user menu--------- " << endl;
        cout << "1 Admin" << endl;
        cout << "2 Customer" << endl;
        cout << "3 Exit" << endl;
        int choice;
        cout << "Enter your choice ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter username ";
            string username;
            cin >> username;
            cout << "Enter pin ";
            int pin;
            cin >> pin;
            bool login = false;
            if (username == "admin" && pin == 1234)
            {
                cout << "login succesfull \n";
                login = true;
            }
            else
            {
                cout << "Wrong password Try again ";
            }
            while (true)
            {
                system("cls");
                cout << "-------Admin Menu--------\n";
                cout << "1- Add products \n";
                cout << "2- View products\n";
                cout << "3 -Edit pricess \n";
                cout << "4- Delete products \n";
                cout << "5- Exit \n";
                cout << "Enter you choice";
                int adminchoice;
                cin >> adminchoice;
                if (adminchoice == 1)
                {
                    cout << "   ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 2)
                {
                    cout << "   ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 3)
                {
                    cout << "   ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 4)
                {
                    cout << "   ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 5)
                {

                    cout << " Exiting to main menu \n";
                    cout << "Press any key to continue \n";
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong choice Entered \n";
                }
            }
        }
        else if (choice == 2)
        {

            while (true)
            {
                system("cls");
                cout << "--------Customer Menu--------\n";

                cout << "1- View products \n";
                cout << "2- Buy products \n";
                cout << "3- View cart \n";
                cout << "4- Remove item from cart \n";
                cout << "5- Checkout \n";
                cout << "Enter your choice";
                int customerchoice;
                cin >> customerchoice;
                if (customerchoice == 1)
                {

                    cout << " 1 - Rice - RS 5000 \n 2 - Flour - RS 4000 \n 3 - Daal - RS 2500 \n 4 - Oil - RS 4000 \n 5 - Tea - RS 2000 \n 6 - Sugar - RS 3000 \n 7 - Salt - RS 1000 \n";
                    cout << "  ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 2)
                {
                    while (true)
                    {

                        cout << "Enter your choice : ";
                        int buyingchoice;
                        cin >> buyingchoice;
                        if (buyingchoice == 1)
                        {
                            cout << "Rice added to cart successfully ";
                        }
                        if (buyingchoice == 2)
                        {
                            cout << "Flour added to cart successfully ";
                        }
                        if (buyingchoice == 3)
                        {
                            cout << "Daal added to cart successfully ";
                        }
                        if (buyingchoice == 4)
                        {
                            cout << "Oil added to cart successfully ";
                        }
                        if (buyingchoice == 5)
                        {
                            cout << "Tea added to cart successfully ";
                        }
                        if (buyingchoice == 6)
                        {
                            cout << "Sugar added to cart successfully ";
                        }
                        if (buyingchoice == 7)
                        {
                            cout << "Salt added to cart successfully ";
                        }
                    }

                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 3)
                {
                    cout << "  ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 4)
                {
                    cout << "  ";
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 5)
                {
                    cout << "Checkout  \n";
                    cout << "Press any key to continue \n";
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong choice entered \n";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting the System ";

            cout << "Press any key to continue \n";
            getch();
            break;
        }
        else
        {
            cout << "Wrong choice entered \n";
        }
    }
}