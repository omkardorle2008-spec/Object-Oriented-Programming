#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;

public:
    // Constructor
    Employee(int id, string n)
    {
        emp_id = id;
        name = n;
        cout << "Employee record created for " << name << endl;
    }

    // Display employee details
    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << name << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee record removed for " << name << endl;
    }
};

int main()
{
    int id;
    string name;

    cout << "Enter Employee ID: ";
    cin >> id;

    cin.ignore();  

    cout << "Enter Employee Name: ";
    getline(cin, name);

    // Object is created using the user's input
    Employee emp(id, name);

    emp.display();

    // Object is automatically destroyed when main() ends
    return 0;
}