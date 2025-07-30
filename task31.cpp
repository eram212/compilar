#include <iostream>
using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    if (line.length() >= 2) {
        if (line[0] == '/' && line[1] == '/') {
            cout << "This is a single-line comment." << endl;
        }
        else if (line[0] == '/' && line[1] == '*') {
            if (line.find("*/") != string::npos) {
                cout << "This is a multi-line comment (on a single line)." << endl;
            } else {
                cout << "This might be the start of a multi-line comment." << endl;
            }
        }
        else {
            cout << "This is NOT a comment line." << endl;
        }
    } else {
        cout << "This is NOT a comment line." << endl;
    }

    return 0;
}
