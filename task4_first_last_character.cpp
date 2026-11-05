#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    if (text.length() > 0 && text[0] == text[text.length() - 1]) {
        cout << "First and last characters are same.";
    }
    else {
        cout << "First and last characters are different.";
    }

    return 0;
}
