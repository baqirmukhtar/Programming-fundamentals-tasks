#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// Global arrays
string productnames[100] = {"Rice", "Flour", "Daal", "Oil", "Tea", "Sugar", "Salt"};
int productprices[100] = {5000, 4000, 2500, 4000, 2000, 3000, 1000};
int productids[100] = {1, 2, 3, 4, 5, 6, 7};

// Cart arrays
int cartproductids[100];
string cartproductnames[100];
int cartprices[100];
int cartquantities[100];
int cartcount = 7;

// ---------------- Function Declarations ----------------
void adminMenu();
void customerMenu();
bool adminLogin();
void addProduct();
void viewProducts();
void editPrices();
void deleteProduct();
void viewCart();
void buyProduct();
void removeFromCart();
void checkout();

// ---------------- Function Definitions ----------------

bool adminLogin()
{
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter pin: ";
    int pin;
    cin >> pin;

    if (username == "admin" && pin == 1234)
    {
        cout << "login successful \n";
        cout << "Press enter to continue";
        getch();
        return true;
    }
    else
    {
        cout << "Wrong password Try again \n";
        getch();
        return false;
    }
}

void addProduct()
{
    cartcount++;
    system("cls");
    cin.ignore();
    string pname;
    int pprice;
    cout << "Enter product name: ";
    getline(cin, pname);
    cout << "Enter product price: ";
    cin >> pprice;

    for (int i = 0; i < cartcount; i++)
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

void viewProducts()
{
    system("cls");
    cout << "--------Products List--------\n";
    for (int i = 0; i < cartcount; i++)
    {
        if (productnames[i] != "")
        {
            cout << productids[i] << " - " << productnames[i] << " - RS " << productprices[i] << "\n";
        }
    }
    cout << "Press any key to continue \n";
    getch();
}

void editPrices()
{
    system("cls");
    int pid, newprice;
    cout << "Enter product ID to edit: \n";
    cin >> pid;
    cout << "Enter new price: \n";
    cin >> newprice;

    for (int i = 0; i < cartcount; i++)
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

void deleteProduct()
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

void adminMenu()
{
    bool login = adminLogin();
    if (!login)
        return;

    while (true)
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
            addProduct();
        else if (adminchoice == 2)
            viewProducts();
        else if (adminchoice == 3)
            editPrices();
        else if (adminchoice == 4)
            deleteProduct();
        else if (adminchoice == 5)
        {
            cout << "Exiting to main menu \n";
            cout << "Press any key to continue \n";
            getch();
            break;
        }
        else
        {
            cout << "Wrong choice Entered \n";
            getch();
        }
    }
}

void buyProduct()
{
    system("cls");
    int buyingchoice;
    int quantity;

    cout << "--------Products List--------\n";
    cout << "Choose from these options \n";
    for (int i = 0; i < cartcount; i++)
    {
        if (productnames[i] != "")
        {
            cout << productids[i] << " - " << productnames[i] << " - RS " << productprices[i] << "\n";
        }
    }
    cout << endl
         << "Enter product ID to buy (0 to exit): ";
    cin >> buyingchoice;

    if (buyingchoice == 0)
        return;

    cout << "Enter quantity: ";
    cin >> quantity;

    int found = 0;
    for (int i = 0; i < cartcount; i++)
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
        cout << "Product not found \n";

    cout << "Press any key to continue \n";
    getch();
}

void viewCart()
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
            total += subtotal;
        }
        cout << "Total: RS " << total << "\n";
    }
    cout << "Press any key to continue \n";
    getch();
}

void removeFromCart()
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

void checkout()
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
            total += subtotal;
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
}

void customerMenu()
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
            viewProducts();
        else if (customerchoice == 2)
            buyProduct();
        else if (customerchoice == 3)
            viewCart();
        else if (customerchoice == 4)
            removeFromCart();
        else if (customerchoice == 5)
        {
            checkout();
            break;
        }
        else
        {
            cout << "Wrong choice entered \n";
            getch();
        }
    }
}

// ------------------- MAIN FUNCTION -------------------
int main()
{
    while (true)
    {
        system("cls");
        cout << "|------------------------------------|" << endl;
        cout << "|-------Mart Management System-------|" << endl;
        cout << "|------------------------------------|" << endl;
        cout << " \"Welcome to Azlan Mart\" \n";
        cout << "How can we help you sir/madam \n";
        cout << "--------User Menu--------- \n";

        cout << "1 Admin" << endl;
        cout << "2 Customer" << endl;
        cout << "3 Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            adminMenu();
        else if (choice == 2)
            customerMenu();
        else if (choice == 3)
        {
            cout << "Exiting the System \n";
            getch();
            break;
        }
        else
        {
            cout << "Wrong choice entered \n";
            getch();
        }
    }
    return 0;
}
