#include <iostream>
using namespace std;

template <typename T>
class Student
{
private:
    T marks1, marks2;

public:
    Student(T a, T b)
    {
        marks1 = a;
        marks2 = b;
    }

    void display()
    {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;

        cout << "Average: "
             << (marks1 + marks2) / 2.0 << endl;
    }
};

int main()
{
    Student<int> s1(80, 91);
    s1.display();

    Student<float> s2(75.5f, 85.5f);
    s2.display();

    return 0;
}
