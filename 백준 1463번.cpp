//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int a;
//	cin >> a;
//	int dp[1000001];
//
//	dp[1] = 0;
//
//	for (int i = 2;i <= a;i++) {
//		dp[i] = dp[i - 1] + 1;
//		if (i % 3 == 0) {
//			dp[i] = min(dp[i / 3] + 1, dp[i]);
//		}
//		if (i % 2 == 0)
//			dp[i] = min(dp[i / 2]+1, dp[i]);
//
//			
//	}
//
//	cout << dp[a];
//	return 0;
//}