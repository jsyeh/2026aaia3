// week06-2.cpp SOIT106_ADVANCE_002
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a==0) return b;
	if (b==0) return a;
	return gcd( b, a%b );
}
int main()
{
	int a, b;
	cin >> a >> b;
	int ans = gcd(a, b);
	cout << a/ans << " " << b/ans << "\n";
}
