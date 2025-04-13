#include <iostream>
#include <vector>

using namespace std;
int part_sum[1024][1024];

int main() {
	int N,M;
	cin >> N>> M;
	int sum;
	vector<int>result;
	for (int i = 0;i < N;i++) {
		sum = 0;
		for (int j = 0;j < N;j++) {
			int a;
			cin >> a;
			sum += a;
			part_sum[i][j] = sum;
		}
	}
	for (int i = 0;i < M;i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int Sum = 0;
		for (int j = x1; j < x2 + 1;j++) {
			if (y1 - 2 > -1)
				Sum += part_sum[j-1][y2 - 1] - part_sum[j-1][y1 - 2];
			else
				Sum += part_sum[j-1][y2 - 1];
		}
		result.push_back(Sum);
	}
	for (int i = 0; i < M;i++) {
		cout << result[i]<<'\n';
	}
}