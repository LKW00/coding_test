//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int a;
//	cin >> a;
//	vector<int>Max{ 0, 0, 0 }; // vector<int>Max(3,0) ¿Í µ¿ÀÏ
//	vector<int>Min{ 0, 0, 0 };
//	for (int i = 0;i < a;i++) {
//		int Max1, Max2, Max3, Min1, Min2, Min3;
//		int num1, num2, num3;
//		cin >> num1 >> num2 >> num3;
//		Max1 = num1 + max(Max[0], Max[1]);
//		Min1 = num1 + min(Min[0], Min[1]);
//
//		Max2 = num2 + max(Max[0], max(Max[1], Max[2]));
//		Min2 = num2 + min(Min[0], min(Min[1], Min[2]));
//
//		Max3 = num3 + max(Max[1], Max[2]);
//		Min3 = num3 + min(Min[1], Min[2]);
//
//		Max[0] = Max1;Max[1] = Max2;Max[2] = Max3;
//		Min[0] = Min1;Min[1] = Min2;Min[2] = Min3;
//	}
//	cout << max(Max[0], max(Max[1], Max[2])) << ' ' << min(Min[0], min(Min[1], Min[2]));
//}