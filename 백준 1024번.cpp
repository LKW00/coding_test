#include <iostream>
using namespace std;

int main() {
    long long N, L;
    cin >> N >> L;

    // L부터 100까지 길이를 시도
    for (int len = L; len <= 100; len++) {
        // len개의 연속된 수의 합이 N이 되는 시작점을 찾기
        // start + (start+1) + ... + (start+len-1) = N
        // len * start + len*(len-1)/2 = N
        // start = (N - len*(len-1)/2) / len

        long long numerator = N - (long long)len * (len - 1) / 2;

        // start가 음이 아닌 정수인지 확인
        if (numerator >= 0 && numerator % len == 0) {
            long long start = numerator / len;

            // 수열 출력
            for (int i = 0; i < len; i++) {
                if (i > 0)
                    cout << " ";
                cout << start + i;
            }
            cout << endl;
            return 0;
        }
    }

    // 조건을 만족하는 수열이 없음
    cout << -1 << endl;
    return 0;
}
