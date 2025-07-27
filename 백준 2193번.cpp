#include <iostream>

using namespace std;

int arr[91];

int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;

	for (int i = 1;i < 88;i++) {
		arr[i + 3] = arr[i + 1] + arr[i + 2];
	}
	cout << arr[n];
}