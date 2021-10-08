#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variables
    int meter_start;
    int meter_end;
    int miles_travelled = meter_end - meter_start;
    int rental_days;
    string customer_name;
    char luxury_car;
    int base_charge;
    int month;

    //User Input 
    cout << "Odometer at start: " ;
    cin >> meter_start;
    
    cout << "Odometer at end: " ;
    cin >> meter_end;

    cout << "Rental days: ";
    cin >> rental_days;
    cin.ignore(10000,'\n');

    cout << "Customer name: ";
    getline(cin,customer_name);
    
    cout << "Luxury car? (y/n): ";
    cin >> luxury_car;

    cout << "Month (1=Jan, 2=Feb, etc.): ";
    cin >> month;

    //Base Charge
    if (luxury_car == 'y'){
        base_charge = 71;
}   else if(luxury_car == 'n'){
    base_charge = 43;
}   else{
    cout << "You must enter y or n.";
    return 0;
}


    //Final Output 
    cout << "---" << endl;
    cout << "The rental charge for " << customer_name << " is ";


    return 0;

}