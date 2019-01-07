/*
AWrite a C++ program that displays a Letter Pyramid from a user-provided std::string.

Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

It's much easier to understand the Letter Pyramid given examples.

If the user enters the string "ABC", then your program should display:
   A
  ABC
 ABCBA
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string input {};
    cout << "\nEnter a string to display a Letter Pyramid: ";
    getline(cin, input);
    cout << endl;

    size_t size = input.size();
    for (size_t i {0}; i < size; ++i) {
        string whitespace (size-i, ' ');
        cout << whitespace;
        cout << input.substr(0, i+1);
        for (size_t j {i}; j > 0; --j)
            cout << input.at(j-1);
        cout << endl;
    }

    cout << endl;
    return 0;
}
