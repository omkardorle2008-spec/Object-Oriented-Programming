#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string registrationNo;
    string brand;

public:
    Vehicle(string reg, string b)
    {
        registrationNo = reg;
        brand = b;
    }

    void displayCommon() const
    {
        cout << "Registration No: " << registrationNo << endl;
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
    int seats;

public:
    Car(string reg, string b, int s) : Vehicle(reg, b)
    {
        seats = s;
    }

    void display() const
    {
        cout << "Car Details" << endl;
        displayCommon();
        cout << "Seating Capacity: " << seats << endl;
        cout << "------------------------" << endl;
    }
};

class Truck : public Vehicle
{
    double loadCapacity;

public:
    Truck(string reg, string b, double load) : Vehicle(reg, b)
    {
        loadCapacity = load;
    }

    void display() const
    {
        cout << "Truck Details" << endl;
        displayCommon();
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    string reg, brand;
    int seats;
    double load;

    cout << "--- Enter Car Details ---" << endl;
    cout << "Registration No: ";
    cin >> reg;
    cin.ignore();
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Seating Capacity: ";
    cin >> seats;
    Car car(reg, brand, seats);

    cout << "\n--- Enter Truck Details ---" << endl;
    cout << "Registration No: ";
    cin >> reg;
    cin.ignore();
    cout << "Brand: ";
    getline(cin, brand);
    cout << "Load Capacity (tons): ";
    cin >> load;
    Truck truck(reg, brand, load);

    cout << "\n";
    car.display();
    truck.display();
    return 0;
}