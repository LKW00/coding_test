#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, M;
	int num;
	cin >> N >> M;
	vector<int>v(M);
	for (int i = 0; i < M;i++) {
			v[i] = 1;
	}
	int index = M - 1;

	while(index>-1){
		for (int i = 0;i < M;i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';

		if (v[index] == N) {
			while (v[index]==N) {
				index--;
				if (index < 0) {
					break;
				}
			}
			if (index < 0) {
				break;
			}
			num = v[index] + 1;
			for (int k = 0;k < M - index;k++) {
				v[index + k] = num;
			}
			index = M-1;
		}
		else
			v[index]++;
	}
}