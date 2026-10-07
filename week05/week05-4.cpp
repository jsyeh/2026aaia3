// week05-4c.cpp It is not homework, don't write!
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int ss = N%60;
	int mm = N/60%60;
	int hh = N/60/60%60;
	//printf("%02d:%02d:%02d", hh, mm, ss);
	cout << setw(2) << setfill('0') << hh << ":"
	     << setw(2) << setfill('0') << mm << ":"
	     << setw(2) << setfill('0') << ss;
}
