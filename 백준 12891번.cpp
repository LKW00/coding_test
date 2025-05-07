#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {
	int S, P;
	cin >> S >>P;
	vector<int>N(4);
	vector<int>M(4);
	int count = 0;

	string v;
	cin >> v;
	for (int i = 0;i < 4;i++) {
		int n;
		cin >> n;
		N[i] += n;
	}
	for (int i = 0;i < S - P+1;i++) {
		if(i==0)
			for (int j = 0;j < P;j++) {
				if (v[j] == 'A')
					M[0]++;
				else if (v[j] == 'C'
					)
					M[1]++;
				else if (v[j] == 'G')
					M[2]++;
				else
					M[3]++;
			}
		else {
			if (v[i - 1] == 'A')
				M[0]--;
			else if (v[i - 1] == 'C')
				M[1]--;
			else if (v[i - 1] == 'G')
				M[2]--;
			else
				M[3]--;
			if (v[P + i - 1] == 'A')
				M[0]++;
			else if (v[P + i - 1] == 'C')
				M[1]++;
			else if (v[P + i - 1] == 'G')
				M[2]++;
			else
				M[3]++;
			
		}
		if (M[0] + 1 > N[0] && M[1] + 1 > N[1] && M[2] + 1 > N[2] && M[3] + 1 > N[3])
				count++;
		
	}
	cout << count;
}