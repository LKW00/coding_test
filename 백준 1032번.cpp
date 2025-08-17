#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> v(N);
	string a;
	for (int i = 0;i < N;i++) {
		cin >> v[i];
	}
	for (int i = 0;i < v[0].size();i++) {
		for (int j = 0;j < N;j++) {
			if (v[0][i] != v[j][i]) {
				a += '?';
				break;
			}
			if (j == N - 1) {
				a += v[0][i];
			}
		}
	}
	cout << a;
}
