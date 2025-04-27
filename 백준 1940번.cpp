#include <iostream>
#include<vector>
using namespace std;

int main() {
	int N,M;
	cin >> N>>M;
	vector<int>v;
	int count=0;
	for (int i = 0;i < N;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < v.size();i++) {
		for (int j = i+1;j < v.size();j++) {
			if (v[i] + v[j]==M) {
				count++;
			}
		}
	}
	cout << count;

}