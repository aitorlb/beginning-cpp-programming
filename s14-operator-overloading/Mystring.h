#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor

    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment

    void display() const;

    int get_length() const;                                      // getters
    const char *get_str() const;

    //Overloaded operator member methods
    bool  operator==(const Mystring &rhs) const; // Equals
    bool  operator!=(const Mystring &rhs) const; // Not equals
    bool   operator<(const Mystring &rhs) const; // Less than (length)
    bool   operator>(const Mystring &rhs) const; // Greater than (length)
    Mystring  operator+(const Mystring &rhs) const;  // Concatenate
    Mystring  &operator+=(const Mystring &rhs);  // Concatenate and assign
    Mystring  operator*(int n) const; // Repeat n times
    Mystring  &operator*=(int n); // Repeat  and assign
    Mystring  operator-();  // Make lowercase
    Mystring  &operator--();  // Make lowercase and assign
    Mystring operator+() ; // Make uppercase
    Mystring &operator++() ; // Make uppercase and assign
};

#endif // _MYSTRING_H_
