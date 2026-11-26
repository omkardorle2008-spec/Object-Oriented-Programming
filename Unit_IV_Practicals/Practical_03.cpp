#include <iostream>
using namespace std;

template <typename T>
class Bank
{
private:
    T balance1, balance2;

public:
    Bank(T a, T b)
    {
        balance1 = a;
        balance2 = b;
    }

    void display()
    {
        cout << "Balance 1: " << balance1 << endl;
        cout << "Balance 2: " << balance2 << endl;
    }

    void total()
    {
        cout << "Total Balance: "
             << balance1 + balance2 << endl;
    }
};

int main()
{
    Bank<int> b1(1000, 2000);
    b1.display();
    b1.total();

    Bank<float> b2(1500.5f, 2500.5f);
    b2.display();
    b2.total();

    return 0;
}
