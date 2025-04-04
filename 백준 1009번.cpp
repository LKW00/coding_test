#include <iostream>
#include<vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> v;
    for (int i = 0; i < a; i++) {
        int b, c;
        cin >> b >> c;
        if (b % 10 == 0) {
            v.push_back(10);
            continue;
        }
        int d = b;
        b %= 10;
        for (int j = 1; j < c; j++) {
            b = (b * d) % 10;
        }
        v.push_back(b);
    }
    for(int i=0;i<v.size();i++)
        cout << v[i]<< endl;
}
