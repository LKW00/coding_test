#include <iostream>
#include <vector>
using namespace std;
int arr[10];
int main() {
	int T;
	cin >> T;
	vector<int> v;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	for (int i = 0;i < 7;i++)
		arr[i+3]=arr[i] + arr[i + 1] + arr[i + 2];
	for (int i = 0;i < T;i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < T;i++)
		cout << arr[v[i]-1]<<'\n';
}