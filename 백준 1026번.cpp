#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    // A 입력
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // B 입력
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // A는 오름차순 정렬
    sort(A.begin(), A.end());

    // B는 내림차순 정렬
    sort(B.begin(), B.end(), greater<int>());

    // 최소 S 계산
    int S = 0;
    for (int i = 0; i < N; ++i) {
        S += A[i] * B[i];
    }

    cout << S << endl;

    return 0;
}
