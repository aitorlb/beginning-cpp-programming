// Section 11
// Challenge
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.

    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.

    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.

        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth

    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!

    Finally,  don't forget to use function prototypes!

    Good luck -- I know you can do it!
*/

#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char get_choice();
void display_list(const vector<int> &list);
void add_number_to_list(vector<int> &list);
void calculate_mean(const vector<int> &list);
void display_smallest(const vector<int> &list);
void display_largest(const vector<int> &list);
void find_number(const vector<int> &list);
int get_number();

int main ()
{
    bool running {true};
    vector<int> numbers {};
    char choice {};

    while (running) {

        display_menu();
        choice = get_choice();

        switch (choice)
        {
            case 'P':
                display_list(numbers);
                break;

            case 'A':
                add_number_to_list(numbers);
                break;

            case 'C':
                numbers.clear();
                cout << "The list is now empty" << endl;
                break;

            case 'M':
                calculate_mean(numbers);
                break;

            case 'S':
                display_smallest(numbers);
                break;

            case 'L':
                display_largest(numbers);
                break;

            case 'F':
                find_number(numbers);
                break;

            case 'Q':
                cout << "Goodbye" << endl;
                running = false;
                break;

            default:
                cout << "You must enter a valid letter"  << endl;
        }
    }

    cout << endl;
    return 0;
}

void display_menu() {
    cout << "\n------- MENU -------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "C - Clear numbers" << endl;
    cout << "M - Display the mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_choice() {
    string input {};
    getline(cin, input);
    return toupper(input.at(0));
}

void display_list(const vector<int> &list) {
    cout << "[ ";
    for (auto num: list)
        cout << num << " ";
    cout << "]";
    if (list.empty()) cout << " - the list is empty";
    cout << endl;
}

int get_number() {
    int num {};
    cout << "Enter a number other than zero: ";
    if (cin >> num) {
        cin.ignore(10000, '\n');
        return num;
    } else {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "You must enter a valid number" << endl;
        return false;
    }
}

void add_number_to_list(vector<int> &list) {
    int num {get_number()};
    if (num) {
        list.push_back(num);
        cout << num << " added to the list" << endl;
    }
}

void calculate_mean(const vector<int> &list) {
    if (list.empty()) cout << "The list is empty" << endl;
    else {
        int sum {};
        for (auto num: list)
            sum += num;
        cout << "The mean is " << static_cast<double>(sum) / list.size() << endl;
    }
}

void display_smallest(const vector<int> &list) {
    int smallest {};
    if (list.empty()) cout << "The list is empty" << endl;
    else {
        smallest = list.at(0);
        for (auto num: list)
            smallest = (num < smallest) ? num : smallest;
        cout << "The smallest number is " << smallest << endl;
    }
}

void display_largest(const vector<int> &list) {
    int largest {};
    if (list.empty()) cout << "The list is empty" << endl;
    else {
        largest = list.at(0);
        for (auto num: list)
            largest = (num > largest) ? num : largest;
        cout << "The largest number is " << largest << endl;
    }
}

void find_number(const vector<int> &list) {
    int num {get_number()};
    if (num) {
        bool found {false};
        for (auto n: list) {
            if (num == n) found = true;
        }
        cout << num << " was ";
        if (!found) cout << "not ";
        cout << "found" << endl;
    }
}
