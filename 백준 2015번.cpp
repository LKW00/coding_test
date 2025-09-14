#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
	long long N, K;
	cin >> N >> K;
	long long result = 0;
	map<long long, long long>m;
	vector<long long>v(N + 1);
	vector<long long>sum(N + 1);
	m[0]++;
	for (int i = 1;i < N + 1;i++) {
		cin >> v[i];
		sum[i] += sum[i - 1] + v[i];
		m[sum[i]]++;
	}
	for (int i = 0;i < N+1;i++) {
		m[sum[i]]--;
		if (m.find(sum[i] + K) != m.end()) {
			result += m[sum[i]+K];
		}
	}
	cout << result;
}
