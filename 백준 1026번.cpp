#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    // A �Է�
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // B �Է�
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // A�� �������� ����
    sort(A.begin(), A.end());

    // B�� �������� ����
    sort(B.begin(), B.end(), greater<int>());

    // �ּ� S ���
    int S = 0;
    for (int i = 0; i < N; ++i) {
        S += A[i] * B[i];
    }

    cout << S << endl;

    return 0;
}
