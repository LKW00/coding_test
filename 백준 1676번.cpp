#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> v(2);
	for (int i = 1; i < N + 1;i++) {
		int a = 0, b = 0;
		int n = i;
		while (n > 1) {
			if (n % 2 == 0) {
				n /= 2;
				a++;
			}
			else if (n % 5 == 0) {
				n /= 5;
				b++;
			}
			else {
				v[0] += a;
				v[1] += b;
				break;
			}
			if (n == 1) {
				v[0] += a;
				v[1] += b;
				break;
			}
		}
	}
	if (v[0] < v[1])
		cout << v[0];
	else
		cout << v[1];
}