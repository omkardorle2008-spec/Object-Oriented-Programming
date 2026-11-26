#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {70, 80, 90, 60, 50};
    int *p = marks;
    int sum = 0;

    cout << "Student Marks: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *p << " ";
        sum = sum + *p;
        p++;
    }

    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / 5.0 << endl;

    return 0;
}
