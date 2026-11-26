#include <iostream>
using namespace std;

template <typename T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Higher Integer Price: "
         << myMax<int>(500, 700) << endl;

    cout << "Higher Decimal Price: "
         << myMax<float>(250.5f, 350.5f) << endl;

    return 0;
}
