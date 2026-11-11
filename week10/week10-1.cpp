// week10-1.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int N) 
{ // 只被 1 跟 本身 整除
	for (int i=2; i<N; i++) {
		if (N%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for (int i=a; i<=b; i++) { // a...b
		if ( isPrime(i) ) ans++; // 判斷質數
	}
	cout << ans << "\n";
}