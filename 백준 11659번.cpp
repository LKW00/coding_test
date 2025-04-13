#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> v,result;
	vector<int> v2;

	for (int i = 0;i < N;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int sum=0;

	for (int i = 0; i < N;i++) {
			sum += v[i];
			v2.push_back(sum);
	}
	for (int i = 0;i < M;i++) {
		int a, b;
		cin >> a >> b;
		if (a == 1)
			result.push_back(v2[b - 1]);
		else
			result.push_back(v2[b - 1] - v2[a-2]);
	}
	for (int i = 0;i < M;i++)
		cout << result[i]<<'\n';
}
