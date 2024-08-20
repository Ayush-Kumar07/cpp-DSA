#include <iostream>
#include <cstring>

using namespace std;

union vehicle {
    char name[50];
    int year;
    float price;
};

int main() {
    vehicle car;
    
    
    cout << "Enter the name of the car: ";
    cin.getline(car.name, 50);
    

    cout << "Car Name: " << car.name << endl;

    
    cout << "Enter the year of the car: ";
    cin >> car.year;
    
    
    cout << "Car Year: " << car.year << endl;

    cout << "Enter the price of the car: ";
    cin >> car.price;
    
    
    cout << "Car Price: $" << car.price << endl;

    return 0;
}
