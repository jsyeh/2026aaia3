/// week04-2bad.cpp 這程式是對的, 用進階 C++迴圈
/// 但在 CodeBlocks 出錯, warning: range-based for only available with ...
/// 2011年之後, 只有在 -std=c++11 或 -std=gnu++11 才能用
/// 所以, 需要改一下設定
/// 下面是 week04 的小考題目 SOIT106_ADVACNE_012
#include <vector>
#include <iostream>
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
	for (int num : a){ /// 在 CodeBlocks 設定出錯時, 永遠跑不出答案
		if (num==now) ans++;
	}
	cout << ans << "\n";
} /// 截圖時, 請把 Build messages 裡面藍色的 warning 也截圖進來
