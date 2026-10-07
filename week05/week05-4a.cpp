// week05-4a.cpp
// It is not homework, don't write!
// It is exam next week
// SOIT108_Advance_011
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ss = N%60;
	int mm = N/60%60;
	int hh = N/60/60%60;
	printf("%02d:%02d:%02d", hh, mm, ss);
}
