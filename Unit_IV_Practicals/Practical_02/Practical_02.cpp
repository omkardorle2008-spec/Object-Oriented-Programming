#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    mySwap(a, b);

    cout << "Integer Swap: "
         << a << " " << b << endl;

    char c = 'A', d = 'B';
    mySwap(c, d);

    cout << "Character Swap: "
         << c << " " << d << endl;

    float x = 1.5f, y = 2.5f;
    mySwap(x, y);

    cout << "Float Swap: "
         << x << " " << y << endl;

    return 0;
}
