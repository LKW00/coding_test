#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> a;
	int N;
	cin >> N;
	int count=0;
	for (int i = 0;i < N;i++) {
		int k;
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(),a.end());
	for (int i =0;i < N;i++) {
		int Left = 0;
		int Right = N-1;
		while (Left<Right) {
			if (a[Left] + a[Right] < a[i]) {
				Left++;
			}
			else if (a[Left] + a[Right] > a[i]) {
				Right--;
			}
			else {
				count++;
				break;
			}

		}
	}
	cout << count;
}