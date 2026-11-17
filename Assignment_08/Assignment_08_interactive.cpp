#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string contact;

public:
    Person(string n, int a, string c)
    {
        name = n;
        age = a;
        contact = c;
    }

    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Employee : public Person
{
protected:
    int employeeID;
    string department;

public:
    Employee(string n, int a, string c, int id, string dept)
        : Person(n, a, c)
    {
        employeeID = id;
        department = dept;
    }

    void displayEmployee() const
    {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(string n, int a, string c, int id, string dept, int size)
        : Employee(n, a, c, id, dept)
    {
        teamSize = size;
    }

    void displayManager() const
    {
        displayEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    string name, contact, dept;
    int age, id, size;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter contact: ";
    cin >> contact;
    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter department: ";
    getline(cin, dept);
    cout << "Enter team size: ";
    cin >> size;

    Manager manager(name, age, contact, id, dept, size);
    cout << "\n--- Manager Details ---" << endl;
    manager.displayManager();
    return 0;
}