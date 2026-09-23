// week03-4.cpp SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<20; i++) {
		cin >> now;
		if (now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for (int num : a) {
		if (num==now) ans++;
	}
	printf("%d\n", ans);
}
