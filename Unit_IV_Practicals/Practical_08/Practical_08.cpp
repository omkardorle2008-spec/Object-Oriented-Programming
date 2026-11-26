#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int id;
    string title;
    float price;

public:
    Book(int i, string t, float p)
    {
        id = i;
        title = t;
        price = p;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming", 450.5f);

    Book *ptr = &b1;

    ptr->display();

    return 0;
}
