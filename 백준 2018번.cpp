#include<iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int count=0;
	for (int i = 1;i*i < 2*N;i++) {
		if((2*N)%i==0)
			if (((2*N)/ i )%2== 1||i%2==1)
				count++;
	}
	cout << count;
}