#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration (create the box)
    int age;

    // Assignment (put something in)
    age = 25;

    // Declaration + initialization (best practice)
    double price = 99.99;
    char grade = 'A';
    bool isStudent = true;
    string name = "Rahim";

    // Multiple variables of the same type
    int x = 1, y = 2, z = 3;

    // Different initialization styles
    int a = 10;     // copy initialization
    int b(10);      // direct initialization
    int c{10};      // brace (uniform) initialization, preferred in modern C++
    // int d{3.5};  // ERROR: brace init blocks narrowing (double to int)

    // auto: compiler figures out the type
    auto count = 42;      // int
    auto pi = 3.14;       // double

    // const: value can never change
    const double GST = 0.15;
    // GST = 0.2;         // ERROR

    // constexpr: value known at compile time
    constexpr int MAX_USERS = 100;

    cout << "Name: " << name << ", Age: " << age << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    return 0;
}