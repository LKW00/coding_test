#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> a;
    string c;

    while (cin >> c) {
        if (c == "0") {
            break;
        }
        a.push_back(c);
    }

    for (int j = 0; j < a.size(); j++) {
        bool Palindrome = true;
        for (int i = 0; i < a[j].length() / 2; i++) {
            if (a[j][i] != a[j][a[j].length() - 1 - i]) {
                Palindrome = false;
                break;
            }
        }
        if (Palindrome) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    return 0;
}