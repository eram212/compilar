#include <iostream>
using namespace std;

bool isValidIdentifier(const string& input) {
    if (input.empty()) return false;

    char first = input[0];
    if (!((first >= 'A' && first <= 'Z') || (first >= 'a' && first <= 'z') || first == '_')) {
        return false;
    }

    for (int i = 1; i < input.length(); i++) {
        char ch = input[i];
        if (!((ch >= 'A' && ch <= 'Z') ||
              (ch >= 'a' && ch <= 'z') ||
              (ch >= '0' && ch <= '9') ||
               ch == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    if (isValidIdentifier(input)) {
        cout << "Valid identifier." << endl;
    } else {
        cout << "Not a valid identifier." << endl;
    }

    return 0;
}
