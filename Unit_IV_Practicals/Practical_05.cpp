#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int *p = &a;
    int *q = &b;

    cout << "Address of a: " << p << endl;
    cout << "Address of b: " << q << endl;

    cout << "Value of a: " << *p << endl;
    cout << "Value of b: " << *q << endl;

    *p = 50;

    cout << "Modified value of a: " << a << endl;

    return 0;
}
