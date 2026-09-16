/// week02-1.cpp 練習 C++ string 字串
/// File-Save As 存檔成 .cpp 檔
#include <iostream> /// 上週教的
#include <string> /// 今天新教的
///以前大一 C語言 是用 char name[100]; 宣告麻煩
/// scanf("%s", name); // 讀資料也很麻煩, 一堆
int main()
{
    std::cout << "請輸入你的名字: ";
    std::string name; /// 使用標準的「字串」
    std::cin >> name;
    std::cout << name << "你好, 你會用字串了";
}
