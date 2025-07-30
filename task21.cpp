#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 1;

    cout << "Enter an expression : ";

    while (cin.get(ch) && ch != '\n') {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << "operator" << count << ": " << ch << endl;
            count++;
        }
    }

    return 0;
}
