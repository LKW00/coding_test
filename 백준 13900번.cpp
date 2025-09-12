#include <iostream>
#include<vector>
using namespace std;

int main() {
	long long a;
	cin >> a;
	vector<int>v(a);
	long long result = 0;
	for (int i = 0;i < a;i++) {
		cin >> v[i];
	}
	long long sum=0;
	for (int i = 0;i < a;i++) {
		sum += v[i];
	}
	for (int i = 0;i < a;i++) {
		result+=(sum - v[i])* v[i];
	}
	cout << result/2;

}
