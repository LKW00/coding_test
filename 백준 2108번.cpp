#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
	int N;
	int sum = 0;
	int Num = 0;
	int count=0;
	int MFR;
	int arr[8001] = {0};
	cin >> N;
	vector<int> v(N);
	unordered_map<int, int> m;

	for (int i = 0;i < N;i++) {
		cin >> v[i];
		sum += v[i];
		arr[v[i] + 4000]++;
		Num = max(Num, arr[v[i]+4000]);
	}
	for (int i = 0;i < 8001;i++) {
		if (arr[i] == Num) {
			count++;
			MFR = i-4000;
		}
		if (count == 2)
			break;
	}
	sort(v.begin(), v.end());

	if (sum > 0) {
		if (sum % N > N / 2) {
			cout << sum / N + 1 << '\n';
		}
		else {
			cout << sum / N << '\n';
		}
	}
	else {
		if (N + sum % N > N / 2) {
			cout << sum / N << '\n';
		}
		else {
			cout << sum / N - 1 << '\n';
		}
	}

	cout << v[(N-1)/2]<<'\n';
	cout << MFR<<'\n';
	cout << v[v.size() - 1] - v[0]<<'\n';
}