#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> table(N);
    for (int i = 0; i < N; i++) {
        cin >> table[i];
    }
    int K;
    cin >> K;

    int answer = 0;
    for (int i = 0; i < N; i++) {
        int zero_cnt = count(table[i].begin(), table[i].end(), '0');
        if (zero_cnt <= K && (K - zero_cnt) % 2 == 0) {
            int cnt = 0;
            for (int j = 0; j < N; j++) {
                if (table[i] == table[j]) cnt++;
            }
            answer = max(answer, cnt);
        }
    }

    cout << answer << "\n";
    return 0;
}
