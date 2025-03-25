#include <iostream>
#include <vector>
#include<vector>
using namespace std;

int main() {
	int fib[100000][2];
	vector<int> v;
	fib[0][0] = 1;
	fib[0][1] = 0;

	fib[1][0] = 0;
	fib[1][1] = 1;
	int a;
	cin >> a;
	for (int i = 0;i < a;i++) {
		int b;
		cin >> b;
		v.push_back(b);
		for (int j = 0;j < b-1;j++) {
			fib[j+2][0]=fib[j][0] + fib[j + 1][0];
			fib[j + 2][1] = fib[j][1] + fib[j + 1][1];
		}
	}for (int i = 0;i < a;i++) {
		cout << fib[v[i]][0] << ' ' << fib[v[i]][1]<<'\n';
	}
}