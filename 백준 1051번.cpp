#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // 가능한 최대 정사각형 크기
    int max_size = min(n, m);

    // 큰 크기부터 작은 크기 순으로 확인
    for (int size = max_size; size >= 1; size--) {
        // 모든 가능한 시작 위치에서 확인
        for (int i = 0; i <= n - size; i++) {
            for (int j = 0; j <= m - size; j++) {
                // 정사각형의 네 꼭짓점 좌표
                int top_left = i;
                int top_right = i;
                int bottom_left = i + size - 1;
                int bottom_right = i + size - 1;

                int left_col = j;
                int right_col = j + size - 1;

                // 네 꼭짓점의 값이 모두 같은지 확인
                char corner_value = grid[top_left][left_col];

                if (grid[top_right][right_col] == corner_value &&
                    grid[bottom_left][left_col] == corner_value &&
                    grid[bottom_right][right_col] == corner_value) {
                    // 정사각형의 넓이 출력
                    cout << size * size << endl;
                    return 0;
                }
            }
        }
    }

    // 여기까지 오면 1×1 정사각형만 가능
    cout << 1 << endl;
    return 0;
}
