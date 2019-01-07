// Section 8 Challenge
/*
        For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following:
        An integer representing the number of cents

        You may assume that the number of cents entered is greater than or equal to zero

        The program should then display how to provide that change to the user.

        In the US:
                1 dollar is 100 cents
                1 quarter is 25 cents
                1 dime is 10 cents
                1 nickel is 5 cents, and
                1 penny is 1 cent.

        Here is a sample run:

        Enter an amount in cents :  92

        You can provide this change as follows:
        dollars    : 0
        quarters : 3
        dimes     : 1
        nickels   : 1
        pennies  : 2

        Feel free to use your own currency system.
        Also, think of how you might solve the problem using the modulo operator.

        Have fun and test your program!!
*/

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
