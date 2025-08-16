#include <iostream>
#include <vector>

using namespace std;
long long arr[1000001];
int main() {
        int N, M;
        cin >> N >> M;
        long long sum = 0;
        long long count = 0;
        vector<int> v(M,0);
        for (int i = 0;i < N;i++) {
                long long num;
                cin >> num;
                sum += num%M;
                arr[i] = sum%M;
        }
        for (int i = 0;i < N;i++) {
                v[arr[i]]++;
        }
        for (int i = 0;i < M;i++) {
                if (i == 0)
                        count += v[i] * (v[i] + 1) / 2;
                else 
                        count += v[i] * (v[i] - 1) / 2;
        }
        cout << count;

}//수정