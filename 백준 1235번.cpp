#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int L = nums[0].size();

    for (int k = 1; k <= L; k++) {
        set<string> seen;
        for (int i = 0; i < N; i++) {
            seen.insert(nums[i].substr(L - k)); // 뒤에서 k자리
        }
        if ((int)seen.size() == N) { // 모두 다르면
            cout << k << "\n";
            break;
        }
    }

    return 0;
}
