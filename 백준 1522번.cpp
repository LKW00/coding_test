//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	string s;
//	cin>> s;
//	int a=0, b=0;
//	int Min;
//	vector<int>A(s.length()), B(s.length());
//	for (int i = 0;i < s.length();i++) {
//		if (s[i] == 'a') {
//			A[i] = 1;
//			a++;
//		}
//		else {
//			B[i] = 1;
//			b++;
//		}
//	}
//	Min = min(a, b);
//	int sum=0;
//	if (a < b) {
//		for (int i = 0;i < s.length();i++) {
//			int Max = 0;
//			for (int j = 0;j < Min;j++) {
//				Max += A[(i + j) % s.length()];
//			}
//			if (sum < Max) {
//				sum = Max;
//			}
//		}
//	}
//	else {
//		for (int i = 0;i < s.length();i++) {
//			int Max = 0;
//			for (int j = 0;j < Min;j++) {
//				Max += B[(i + j) % s.length()];
//			}
//			if (sum < Max) {
//				sum = Max;
//			}
//		}
//	}
//
//	cout << Min - sum;
//}