#include <iostream>

using namespace std;
int arr[1001];
int main() {
	int n;
	cin >> n;
	int Max=0;
	for (int i = 1;i < n+1;i++) {
		cin >> arr[i];
	}
	for (int i = 1;i < n-1;i++) {
		arr[i + 2] = max(arr[i + 2], arr[i] + arr[i + 1]);
		Max = max(arr[i + 2], Max);
	}
	cout << Max;
}