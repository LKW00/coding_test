#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a;
	cin >> a;
	int b[15][15];
	for (int i = 1; i < 15;i++) {
		b[0][i] = i;
		b[i][0] = 0;
	}
	vector<int>v;
	for (int i = 0; i < a;i++) {
		int k, n;
		cin >> k>> n;
		
		for (int j = 0;j < k;j++) {
			for (int l = 0;l < n;l++)
				b[j + 1][l+1] = b[j + 1][l] + b[j][l + 1];
		}
		v.push_back(b[k][n]);
	}
	for (int i = 0;i < a;i++)
		cout << v[i] << '\n';
}