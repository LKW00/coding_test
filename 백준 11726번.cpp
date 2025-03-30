//#include<iostream>
//
//using namespace std;
//
//int b[1001][1001];
//
//int main() {
//	int a;
//	cin >> a;
//	int num = 0;
//
//	b[1][0] = 1;
//	b[1][1] = 1;
//	for (int i = 1;i < a;i++) {
//		b[i + 1][i + 1] = 1;
//		b[i + 1][0] = 1;
//		for (int j = 1;j < i + 1;j++) {
//			b[i + 1][j] = (b[i][j] + b[i][j - 1]) % 10007;
//		}
//	}
//	for (int i = 0;i < a / 2 + 1;i++) {
//		num += b[a - i][i];
//	}
//	cout << num % 10007;
//	return 0;
//}