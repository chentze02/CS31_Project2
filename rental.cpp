#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variables
    int meter_start;
    int meter_end;
    int rental_days;
    string customer_name;
    char luxury_car;
    int base_charge;
    int total_base_charge;
    double first_hundred_miles;
    double next_four_hundred_miles;
    double additional_miles100 = 0;
    double additional_miles400 = 0;
    double additional_miles500 = 0;
    double additional_charge;
    double seasonal_pricing;
    double total_charge;
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
    }   //Seasonal Pricing Calculation
        else{
        {if (month == 12 || month <= 3){
            seasonal_pricing = 0.27;     
        }else{
            seasonal_pricing = 0.21;
        }
        }
    }
    //Calculations
    int miles_travelled = meter_end - meter_start;

    //Base Charge Calculation
    total_base_charge = base_charge*rental_days;

    //Additional Charge Calculation
    if(miles_travelled <= 100){
        additional_miles100 = miles_travelled;
    }else if(miles_travelled > 100 && miles_travelled <= 500){
        additional_miles100 = 100;
        additional_miles400 = miles_travelled-100;
    }else if(miles_travelled > 500){
        additional_miles100 = 100;
        additional_miles400 = 400;
        additional_miles500 = miles_travelled - 500;
    }

    additional_charge = additional_miles100*0.27 + additional_miles400*seasonal_pricing
     + additional_miles500*0.17;

    //Total Charge Calculation
    total_charge = total_base_charge + additional_charge;

    //Final Output 
    cout << "---" << endl;
    cout << miles_travelled << endl;
    cout << seasonal_pricing << endl;
    cout << additional_miles100 << endl;
    cout << additional_miles400 << endl;
    cout << additional_miles500 << endl;
    cout << total_base_charge << endl;
    cout << additional_charge << endl;
    cout << "The rental charge for " << customer_name << " is $" << total_charge;
    


    return 0;

}