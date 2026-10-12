#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	long long x,y;
	cin>>x>>y;
	if(x==y);
	else if (x>y) {
	    long long difference = x-y;
	    if(difference%2==0) cout << difference/2;
	    else cout<<(difference/2) +2;
	}
	return 0;
}
