#include<iostream>
using namespace std;
int main(){
    int choice;
    string book_name,issue_book;
    cout<<endl<<"-------Library System--------"<<endl;
    cout<<"1.Add Book "<<endl;
    cout<<"2.View Book "<<endl;
    cout<<"3.Borrow Book"<<endl;
    cout<<"4.Issue Book"<<endl;
    cout<<"5.Exit"<<endl;

    cout<<"Enter your choice (1-5): ";
    cin>>choice;
    if(choice==1){
        cout<<"Enter a Book Name: ";
        cin>>book_name;
        cout<<"You added a book: "<<book_name<<endl;
    }
    else if(choice==2){
        cout<<"View book: "<<book_name<<endl;
    }
    else if(choice==3){
        cout<<"You Borrowed a Book: "<<book_name<<endl;
    }
    else if(choice==4){
        cout<<"Issued book name: ";
        cin>>issue_book;
        cout<<"YOU ISSUED A BOOK: "<<issue_book<<endl;
    }
    else if(choice==5){
        cout<<"Exit!"<<endl;
        return 0;
    }
    else{
        cout<<"Invalid credentials!"<<endl;
        return 0;
    }
    return 0;
}