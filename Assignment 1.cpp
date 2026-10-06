#include <iostream>
#include <string>

using namespace std;
 class Book
 {
    private:
    string title;
    string author;
    string ISBN;
    double price;

    public:

    void recordBook() 

    {
        cout<<"enter book Title";
        getline(cin,title);

        cout<<"Enter autorname";
        getline(cin,ISBN);

        cout<<"Enter price";

        cin>>price;
        cin.ignore();
        
    }
    void displayBook()
    {
        cout<<"\n-----------------Book Information-----------"<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Autor:"<<author<<endl;
        cout<<"ISBN:"<<ISBN<<endl;
        cout<<"price:"<<price<<endl;

        }

    };

    int main()
    {
        Book book;
        cout<<"-------Digital book inventory system----------"<<endl;

        book.recordBook();
        book.displayBook();
        
        return 0;
    }

