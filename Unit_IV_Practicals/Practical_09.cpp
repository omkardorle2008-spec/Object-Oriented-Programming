#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students" << endl;
        return 0;
    }

    int *marks = new int[n];

    cout << "Enter student marks: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    int highest = marks[0];

    cout << "Student Marks: ";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";

        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    cout << endl;
    cout << "Highest Marks: " << highest << endl;

    delete[] marks;
    marks = nullptr;

    return 0;
}
