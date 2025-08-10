#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 큐를 1부터 n까지의 수로 초기화
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    int total_operations = 0;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        // 현재 큐에서 target의 위치 찾기
        int current_pos = 0;
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == target) {
                current_pos = j;
                break;
            }
        }

        int queue_size = dq.size();

        // 왼쪽으로 회전하는 경우의 거리
        int left_distance = current_pos;

        // 오른쪽으로 회전하는 경우의 거리
        int right_distance = queue_size - current_pos;

        // 최소 거리 선택
        int min_distance = min(left_distance, right_distance);
        total_operations += min_distance;

        // target을 첫 번째 위치로 이동
        if (left_distance <= right_distance) {
            // 왼쪽으로 회전
            for (int j = 0; j < left_distance; j++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            // 오른쪽으로 회전
            for (int j = 0; j < right_distance; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        // 첫 번째 원소 제거
        dq.pop_front();
    }

    cout << total_operations << endl;

    return 0;
}