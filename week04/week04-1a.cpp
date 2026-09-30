// week04-1a.cpp SOIT108_Advance_008
// C version (you learned before)
#include <stdio.h> // C version
int main()
{
	int a[10]; // C version
	for (int i=0; i<10; i++) {
		scanf("%d", &a[i] ); // C version
	}

	for (int i=0; i<10; i++) {
		for (int j=i+1; j<10; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i=0; i<10; i++) {
		printf("%d ", a[i] ); // C version
	}
}
