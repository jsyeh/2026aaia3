// week05-4b.cpp It is not homework, don't write!
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int ss = N%60;
	int mm = N/60%60;
	int hh = N/60/60%60;
	printf("%02d:%02d:%02d", hh, mm, ss);
}
