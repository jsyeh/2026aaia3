// week01-2.cpp SOIT106_ADVANCE_001
#include <iostream> /// C++ 的輸入輸出, 功能強大
int main()
{
	int N;
	std::cin >> N; /// C++ 輸入資料 標準::輸入 送到右邊 N
	int b = N, ans = 0;
	while (N>0){
		ans = ans*10 + N%10;
		N = N / 10;
	}
	/// C++ 輸入資料, 將右邊的整數, 依序送到左邊 送出
	/// 錯 std::cout << b << ans << b+ans; // WRONG-ANSWER
	/// 上面漏了 "+" 漏了 "=" 又漏了 跳行
	std::cout << b << "+" << ans << "=" << b+ans << std::endl; ///正確
	std::cout << b << "+" << ans << "=" << b+ans << "\n"; ///也正確
	printf("%d+%d=%d\n", b, ans, ans+b); ///大一下教 C 竟然也可以用
}
