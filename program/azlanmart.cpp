#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    // Data Structures using Arrays
    string productnames[7] = {"Rice", "Flour", "Daal", "Oil", "Tea", "Sugar", "Salt"};
    int productprices[7] = {5000, 4000, 2500, 4000, 2000, 3000, 1000};
    int productids[7] = {1, 2, 3, 4, 5, 6, 7};

    // Cart Arrays
    int cartproductids[100];
    string cartproductnames[100];
    int cartprices[100];
    int cartquantities[100];
    int cartcount = 0;

    // main header 
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
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter username: ";
            string username;
            cin >> username;
            cout << "Enter pin: ";
            int pin;
            cin >> pin;

            bool login = false;
            if (username == "admin" && pin == 1234)
            {
                cout << "login successful \n";
                login = true;
                getch();
            }
            else
            {
                cout << "Wrong password Try again \n";
                getch();
                continue;
            }

            while (login)
            {
                system("cls");
                cout << "-------Admin Menu--------\n";
                cout << "1- Add products \n";
                cout << "2- View products\n";
                cout << "3- Edit prices \n";
                cout << "4- Delete products \n";
                cout << "5- Exit \n";
                cout << "Enter your choice: ";
                int adminchoice;
                cin >> adminchoice;

                if (adminchoice == 1)
                {
                    system("cls");
                    string pname;
                    int pprice;
                    cout << "Enter product name: ";
                    cin >> pname;
                    cout << "Enter product price: ";
                    cin >> pprice;

                    int lastIndex = 6;
                    for (int i = 0; i < 7; i++)
                    {
                        if (productnames[i] == "")
                        {
                            productnames[i] = pname;
                            productprices[i] = pprice;
                            productids[i] = i + 1;
                            cout << "Product added successfully \n";
                            break;
                        }
                    }
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 2)
                {
                    system("cls");
                    cout << "--------Products List--------\n";
                    for (int i = 0; i < 7; i++)
                    {
                        if (productnames[i] != "")
                        {
                            cout << productids[i] << " - " << productnames[i] << " - RS " << productprices[i] << "\n";
                        }
                    }
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 3)
                {
                    system("cls");
                    int pid, newprice;
                    cout << "Enter product ID to edit: ";
                    cin >> pid;
                    cout << "Enter new price: ";
                    cin >> newprice;

                    for (int i = 0; i < 7; i++)
                    {
                        if (productids[i] == pid)
                        {
                            productprices[i] = newprice;
                            cout << "Price updated successfully \n";
                            break;
                        }
                    }
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 4)
                {
                    system("cls");
                    int pid;
                    cout << "Enter product ID to delete: ";
                    cin >> pid;

                    for (int i = 0; i < 7; i++)
                    {
                        if (productids[i] == pid && productnames[i] != "")
                        {
                            productnames[i] = "";
                            productprices[i] = 0;
                            productids[i] = 0;
                            cout << "Product deleted successfully \n";
                            break;
                        }
                    }
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (adminchoice == 5)
                {
                    cout << "Exiting to main menu \n";
                    cout << "Press any key to continue \n";
                    getch();
                    login = false;
                }
                else
                {
                    cout << "Wrong choice Entered \n";
                    cout << "Press any key to continue \n";
                    getch();
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
                cout << "Enter your choice: ";
                int customerchoice;
                cin >> customerchoice;

                if (customerchoice == 1)
                {
                    system("cls");
                    cout << "--------Products List--------\n";
                    for (int i = 0; i < 7; i++)
                    {
                        if (productnames[i] != "")
                        {
                            cout << productids[i] << " - " << productnames[i] << " - RS " << productprices[i] << "\n";
                        }
                    }
                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 2)
                {
                    system("cls");
                    int buyingchoice;
                    int quantity;

                    cout << "--------Products List--------\n";
                    cout << "Choose from these options ";
                    for (int i = 0; i < 7; i++)
                    {
                        if (productnames[i] != "")
                        {
                            cout << productids[i] << " - " << productnames[i] << " - RS " << productprices[i] << "\n";
                        }
                    }
                    cout << "Enter product ID to buy (0 to exit): ";
                    cin >> buyingchoice;

                    if (buyingchoice == 0)
                    {
                        continue;
                    }

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    int found = 0;
                    for (int i = 0; i < 7; i++)
                    {
                        if (productids[i] == buyingchoice && productnames[i] != "")
                        {
                            cartproductids[cartcount] = productids[i];
                            cartproductnames[cartcount] = productnames[i];
                            cartprices[cartcount] = productprices[i];
                            cartquantities[cartcount] = quantity;
                            cartcount++;
                            cout << productnames[i] << " added to cart successfully \n";
                            found = 1;
                            break;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Product not found \n";
                    }

                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 3)
                {
                    system("cls");
                    cout << "--------Your Cart--------\n";

                    if (cartcount == 0)
                    {
                        cout << "Cart is empty \n";
                    }
                    else
                    {
                        int total = 0;
                        for (int i = 0; i < cartcount; i++)
                        {
                            int subtotal = cartprices[i] * cartquantities[i];
                            cout << cartproductnames[i] << " x" << cartquantities[i] << " - RS " << subtotal << "\n";
                            total = total + subtotal;
                        }
                        cout << "Total: RS " << total << "\n";
                    }

                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 4)
                {
                    system("cls");

                    if (cartcount == 0)
                    {
                        cout << "Cart is empty \n";
                    }
                    else
                    {
                        int productId;
                        cout << "Enter product ID to remove: ";
                        cin >> productId;

                        for (int i = 0; i < cartcount; i++)
                        {
                            if (cartproductids[i] == productId)
                            {
                                for (int j = i; j < cartcount - 1; j++)
                                {
                                    cartproductids[j] = cartproductids[j + 1];
                                    cartproductnames[j] = cartproductnames[j + 1];
                                    cartprices[j] = cartprices[j + 1];
                                    cartquantities[j] = cartquantities[j + 1];
                                }
                                cartcount--;
                                cout << "Item removed from cart \n";
                                break;
                            }
                        }
                    }

                    cout << "Press any key to continue \n";
                    getch();
                }
                else if (customerchoice == 5)
                {
                    system("cls");

                    if (cartcount == 0)
                    {
                        cout << "Cart is empty. Nothing to checkout \n";
                    }
                    else
                    {
                        int total = 0;
                        cout << "--------Checkout--------\n";
                        for (int i = 0; i < cartcount; i++)
                        {
                            int subtotal = cartprices[i] * cartquantities[i];
                            cout << cartproductnames[i] << " x" << cartquantities[i] << " - RS " << subtotal << "\n";
                            total = total + subtotal;
                        }
                        cout << "Total Amount: RS " << total << "\n";
                        cout << "Thank you for shopping! \n";

                        for (int i = 0; i < cartcount; i++)
                        {
                            cartproductids[i] = 0;
                            cartproductnames[i] = "";
                            cartprices[i] = 0;
                            cartquantities[i] = 0;
                        }
                        cartcount = 0;
                    }

                    cout << "Press any key to continue \n";
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong choice entered \n";
                    cout << "Press any key to continue \n";
                    getch();
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting the System \n";
            cout << "Press any key to continue \n";
            getch();
            break;
        }
        else
        {
            cout << "Wrong choice entered \n";
            cout << "Press any key to continue \n";
            getch();
        }
    }

    return 0;
}