#include <iostream>
using namespace std;

int main() {
    char ch;
    bool isNumeric = true;

    cout << "Enter a value: ";

    while (cin.get(ch) && ch != '\n') {
        if (ch < '0' || ch > '9') {
            isNumeric = false;
        }
    }

    if (isNumeric) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }

    return 0;
}
