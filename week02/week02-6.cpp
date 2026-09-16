// week02-6.cpp SOIT106_ADVANCE_004
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for ( char c : s ) {
		if ( isupper(c) ) c = c -'A' + 'a';
		else if ( islower(c) ) c = c - 'a' + 'A';
		cout << c;
	}
	cout << "\n";
}
