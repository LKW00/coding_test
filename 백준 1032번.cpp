#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> files(N);

    for (int i = 0; i < N; i++) {
        cin >> files[i];
    }

    string pattern = files[0]; // 첫 번째 파일명으로 시작

    for (int col = 0; col < pattern.size(); col++) {
        for (int row = 1; row < N; row++) {
            if (files[row][col] != files[0][col]) {
                pattern[col] = '?'; // 다른 문자가 있으면 ? 처리
                break;
            }
        }
    }

    cout << pattern << "\n";
    return 0;
}
