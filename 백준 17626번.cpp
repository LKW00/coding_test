#include <iostream>
#include <cmath>
using namespace std;
int arr[50001];

int main() {
	int a;
	cin >> a;
	for (int i = 1;i < 50001;i++) {
		arr[i] = 0;
	}
	for (int i = 1;i < 224;i++) {
		arr[i*i] = 1;
	}
	for (int i = 1;i < 224;i++) {
		for (int j = 1;j < 224;j++) {
			if (i*i + j * j > 50000)
				break;
			if (arr[i * i + j * j] == 0) {
				arr[i * i + j * j] = 2;
			}
		}
	}
	for (int i = 1;i < 50001;i++) {
		if (arr[i] == 2) {
			for (int j = 1;j < 224;j++) {
				if (i + j * j > 50000)
					break;
				if (arr[i + j * j] == 0) {
					arr[i + j * j] = 3;
				}
			}
		}
	}
	for (int i = 1;i < 50001;i++) {
		if (arr[i] == 0)
			arr[i] = 4;
	}
	cout << arr[a];
}