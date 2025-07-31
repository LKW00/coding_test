#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N,M;
	int count = 0;
	int result=0;
	vector<int> v;
	string a;
	string S;
	cin >> N>>M;
	cin >> S;
	for (int i = 0; i < M;i++) {
		while (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
			count++;
			i += 2;
		}
		if(count>N-1)
			v.push_back(count);
		count = 0;
	}
	for (int i = 0;i < v.size();i++) {
		result += v[i] - N + 1;
	}
	cout << result;
}