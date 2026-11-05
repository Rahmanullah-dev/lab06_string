#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName, fullName;

    cout << "Enter first name: ";
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);

    fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName;

    return 0;
}
