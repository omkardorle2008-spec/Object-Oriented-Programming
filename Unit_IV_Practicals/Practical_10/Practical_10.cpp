#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee *e = new Employee;

    e->accept();
    e->display();

    delete e;
    e = nullptr;

    return 0;
}
