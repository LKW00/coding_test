#include <iostream>

using namespace std;

int arr[1001];
int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 0;i < 998;i++) {
		arr[i + 3] = arr[i + 2] + 2*arr[i + 1];
	}
	cout << arr[n];
}