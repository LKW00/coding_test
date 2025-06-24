#include<stdio.h>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	unordered_map<string,int> a;
	vector<string> v;
	for (int i = 0;i < N;i++) {
		string s;
		cin >> s;
		a[s] = 1;
	}
	for (int i = 0;i < M;i++) {
		string s;
		cin >> s;
		if (a[s] == 1)
			v.push_back(s);
	}
	sort(v.begin(), v.end());
	cout << v.size();
	for (int i = 0;i < v.size();i++)
		cout << v[i]<<'\n';
}