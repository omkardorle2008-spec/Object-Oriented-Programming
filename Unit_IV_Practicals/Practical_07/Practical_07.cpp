#include <iostream>
using namespace std;

int main()
{
    int id[5] = {101, 102, 103, 104, 105};

    int *p = &id[0];
    int *q = &id[3];

    cout << "First Employee ID: " << *p << endl;
    cout << "Second Employee ID: " << *q << endl;

    cout << "Address of p: " << p << endl;
    cout << "Address of q: " << q << endl;

    if (p < q)
    {
        cout << "p comes before q" << endl;
    }
    else
    {
        cout << "p does not come before q" << endl;
    }

    cout << "Pointer Difference: " << q - p << endl;

    return 0;
}
