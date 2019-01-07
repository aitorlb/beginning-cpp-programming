// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Frank's Carpet Cleaning Service" << endl;

    int small_rooms{0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;

    int large_rooms{0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    const double price_per_small_room{25.0};
    const double price_per_large_room{35.0};

    const double sales_tax{0.06};
    const int expiration_date{30};

    double cost{ (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room) };
    double cost_plus_tax{ cost * sales_tax };
    double total_estimate{ cost + cost_plus_tax };


    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small rooms: $" << price_per_small_room << endl;
    cout << "Price per large rooms: $" << price_per_large_room << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << cost_plus_tax << endl;
    cout << "=========================================" << endl;
    cout << "Total estimate: " << total_estimate << endl;
    cout << "This estimate is valid for " << expiration_date << " days" << endl;

    cout << endl;
    return 0;
}
