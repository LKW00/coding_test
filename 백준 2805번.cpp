#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long N, M;
	cin >> N >> M;
	vector<long long>v;
	for (int i = 0;i < N;i++) {
		long long k;
		cin >> k;
		v.push_back(k);
	}
	long long max = 0;
	for (int i = 0;i < N;i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	long long left = 0, right = max;
	long long result;
	while (left + 1 < right) {
		result = 0;
		for (int i = 0;i < N;i++) {
			if (v[i] - (left + right) / 2 > 0)
				result += (v[i] - (left + right) / 2);
		}
		if (result < M)
			right = (left + right) / 2;
		else if (result > M)
			left = (left + right) / 2;
		else
			break;
	}
	cout << (left + right) / 2;
}