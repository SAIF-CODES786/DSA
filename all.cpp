#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	int count = 0;
	while(x!=y) {
	    if (x<y) {
	        x++;
	    } else {
	        y=y+2;
	    }
	    
	    count++;
	    
	}
	cout<<count<<endl;
	
	

    
}
