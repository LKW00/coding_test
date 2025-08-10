#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    int lenA = A.length();
    int lenB = B.length();
    
    int minDiff = lenA; // 최대 차이는 A의 길이와 같음
    
    // A를 B의 각 위치에서 비교
    // i는 A가 시작되는 B에서의 위치
    for (int i = 0; i <= lenB - lenA; i++) {
        int diff = 0;
        
        // A의 각 문자와 B의 해당 위치 문자 비교
        for (int j = 0; j < lenA; j++) {
            if (A[j] != B[i + j]) {
                diff++;
            }
        }
        
        minDiff = min(minDiff, diff);
    }
    
    cout << minDiff << endl;
    
    return 0;
}
