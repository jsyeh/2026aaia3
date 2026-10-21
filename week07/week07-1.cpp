// week07-1.cpp SOIT106_ADVANCE_005_C++
#include <iostream>
using namespace std;
int MYPOWER(int a, int b) {
	int ans = 1;
	for (int i=0; i<b; i++) {
		ans *= a;
	}
	return ans;
}

int main(){
    int a,b;cin>>a>>b;
    cout<<MYPOWER(a,b);
    return 0;
}