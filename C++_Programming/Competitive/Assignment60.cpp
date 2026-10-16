#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int n = 0;
	int ans = 0;
	
	while(t--)
	{
	    cin >> n;
	    
	    ans = ceil(double(n) / double(4));
	    
	    cout << ans << endl;
	}
	
	return 0;

}
