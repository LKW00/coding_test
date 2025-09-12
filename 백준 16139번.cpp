#include <iostream>
#include <vector>

using namespace std;

int main() {
	string S;
	cin >> S;
	int q;
	cin >> q;
	vector<vector<int>>v(26,vector<int>(S.length()));
	vector<int>result;
	v[S[0] - 'a'][0]++;
	for (int i = 1;i < S.length();i++) {
		for (int j = 0;j < 26;j++) {
			if (v[j][i - 1] > 0) {
				v[j][i] = v[j][i - 1];
			}
		}
		v[S[i] - 'a'][i]++;
	}
	for (int i = 0;i < q;i++) {
		char a;
		cin >> a;
		int l, r;
		cin >> l >> r;
		if (l > 0)
			result.push_back(v[a - 'a'][r] - v[a - 'a'][l - 1]);
		else
			result.push_back(v[a - 'a'][r]);
	}
	for (int i = 0;i < q;i++) {
		cout << result[i]<<'\n';
	}

}
