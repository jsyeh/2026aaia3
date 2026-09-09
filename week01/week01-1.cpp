/// week01-1.cpp SOIT106_ADVANCE_001
/// 這題是「大一下-程式設計二」的題目, 沒寫過的要註解
#include <stdio.h>
int main()
{
	int N; /// 整數 N
	scanf("%d", &N); /// C語言, 讀入整數N
	int b = N, ans=0; /// 將 N 的值備份b、答案0開始湊
	while(N>0){ /// 只要 N 還在, 就繼續「剝皮」
		ans = ans*10 + N%10; /// 答案 * 10 + 皮皮
		N = N / 10; /// N 被剝皮
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}/// 1234
///     4 剝皮
///  123 剝完皮, 變小
///    3
///  12
///   2
///  1
