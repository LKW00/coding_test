#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b, c;
        cin >> b >> c;
        int d = b;
        for (int j = 0; j < c; j++) {
            b = (b * d) % 10;
        }
        cout << b << endl;
    }
}
