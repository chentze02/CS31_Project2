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
    int total_base_charge;
    double first_hundred_miles;
    double next_four_hundred_miles;
    double additional_miles;
    int month;

    //User Input 
    cout << "Odometer at start: " ;
    cin >> meter_start;
    //First error
    if (meter_start < 0){
        cout << "The starting odometer reading must not be negative." ;
        return 0;
    }
    
    cout << "Odometer at end: " ;
    cin >> meter_end;
    //Second error
    if (meter_end < meter_start){
        cout << "The ending odometer reading must be at least as large as the starting reading.";
        return 0;
    }

    cout << "Rental days: ";
    cin >> rental_days;
    //Third error
    if(rental_days <= 0){
        cout << "The number of rental days must be positive.";
        return 0;
    }
    cin.ignore(10000,'\n');

    cout << "Customer name: ";
    getline(cin,customer_name);
    //Fourth error
    if (customer_name == ""){
        cout << "You must enter a customer name.";
        return 0;
    }
    
    cout << "Luxury car? (y/n): ";
    cin >> luxury_car;
    //Base Charge
    if (luxury_car == 'y'){
        base_charge = 71;
}   else if(luxury_car == 'n'){
        base_charge = 43;
    //Fifth error
}   else{
        cout << "You must enter y or n.";
        return 0;
}

    cout << "Month (1=Jan, 2=Feb, etc.): ";
    cin >> month;
    //Sixth error
    if (month < 1 || month > 12){
        cout << "The month number must be in the range 1 through 12.";
        return 0;
    }

    //Final Output 
    cout << "---" << endl;
    cout << "The rental charge for " << customer_name << " is ";


    return 0;

}