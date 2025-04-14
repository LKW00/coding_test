#include <iostream>

using namespace std;

int a[51];
int main() {
	a[0] = 1;
	a[1] = 1;
	for (int i = 0;i < 48;i++) {
		a[i+2] = (a[i] + a[i+1]+1)% 1000000007;
	}
	int c;
	cin >> c;
	cout << a[c];

}