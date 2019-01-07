#include <iostream>

using namespace std;

int main ()
{
    int cents{};
    cout << "Enter an amount in cents: ";
    cin >> cents;

    int balance{cents}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = balance / 100;
    balance %= 100;

    quarters = balance / 25;
    balance %= 25;

    dimes = balance / 10;
    balance %= 10;

    nickels = balance / 5;
    balance %= 5;

    pennies = balance;

    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars\t: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes\t: " << dimes << endl;
    cout << "nickels\t: " << nickels << endl;
    cout << "pennies\t: " << pennies << endl;

    cout << endl;
    return 0;
}
