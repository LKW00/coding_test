#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // ť�� 1���� n������ ���� �ʱ�ȭ
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    int total_operations = 0;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        // ���� ť���� target�� ��ġ ã��
        int current_pos = 0;
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == target) {
                current_pos = j;
                break;
            }
        }

        int queue_size = dq.size();

        // �������� ȸ���ϴ� ����� �Ÿ�
        int left_distance = current_pos;

        // ���������� ȸ���ϴ� ����� �Ÿ�
        int right_distance = queue_size - current_pos;

        // �ּ� �Ÿ� ����
        int min_distance = min(left_distance, right_distance);
        total_operations += min_distance;

        // target�� ù ��° ��ġ�� �̵�
        if (left_distance <= right_distance) {
            // �������� ȸ��
            for (int j = 0; j < left_distance; j++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            // ���������� ȸ��
            for (int j = 0; j < right_distance; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        // ù ��° ���� ����
        dq.pop_front();
    }

    cout << total_operations << endl;

    return 0;
}