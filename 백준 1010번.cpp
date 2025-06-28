#include <iostream>

using namespace std;

long long arr[30][30];

int main() {
	long long N, M;
	cin >> N>> M;
	for(int i=0;i<N;i++)
		arr[0][i] = 1;
	for (int i = 0;i < M-1;i++) {
		arr[i+1][0]=1;
		for(int j=1;j<N;j++)
			arr[i+1][j]=arr[i][j] + arr[i+1][j-1];
	}
	cout << arr[M][N];
}