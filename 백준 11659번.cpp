#include <iostream>
#include<vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> v,v1;
	
	for (int i = 0;i < N;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int sum;
	for (int i = 0;i < M;i++) {
		sum=0;
		int a, b;
		cin >> a >> b;
		for (int j = a;j < b+1;j++) {
			sum += v[j - 1];
		}
		v1.push_back(sum);
	}
	for (int i = 0;i < M;i++) {
		cout << v1[i]<<'\n';
	}
}