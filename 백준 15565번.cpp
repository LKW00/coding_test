#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	vector<int>v(N+1);
	for (int i = 0;i < N;i++) {
		int a;
		cin >> a;
		if (a == 1)
			v[i + 1] = v[i] + 1;
		else
			v[i + 1] = v[i];
	}
	if (v[N] < K) {
		cout << -1;
		return 0;
	}
	int a=0, b=1;
	int Min = N;
	

	while  (b<N+1) {
		if (v[b] - v[a] < K) {
			b++;
		}
		else if (v[b] - v[a] == K) {
			Min = min(b - a, Min);
			a++;
		}
		
	}
	cout << Min;
}