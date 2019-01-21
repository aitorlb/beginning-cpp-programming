/* Section 14 Challenge
Operator overloading
-----------------------
Overload the operators in the Mystring class. */

#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;           // false
    
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
     cout << (a<b) << endl;         // true
    cout << (a>b) << endl;          // false
    
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << s1 << endl;             // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;             // frank*****       
    
    s1 += "-----";                      // frank*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;           // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;
    
    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;
    
    repeat_string += (repeat_string * 3);
    cout << repeat_string << endl;
    
    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);


  Mystring s = "Frank";  
    ++s;
    cout << s << endl;                  // FRANK
    
    --s; 
    cout << s << endl;                  // frank
    Mystring result;
    result = +s;                           
    cout << s << endl;                  // frank
    cout << result << endl;           // FRANK
    
    s = -result;
    cout << s << endl;                  // frank
    cout << result << endl;           // FRANK
    return 0;
}

