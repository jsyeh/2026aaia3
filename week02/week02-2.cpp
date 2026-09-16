/// week02-2.cpp 要使用「命名空間」
#include <iostream> /// 上週教的
#include <string> /// 今天新教的
using namespace std; /// 使用 std 命名空間
int main()
{ /// 就不用再寫一堆 std::
    cout << "請輸入你的名字: ";
    string name; /// 使用標準的「字串」
    cin >> name;
    cout << name << "你好, 你會用字串了";
}
