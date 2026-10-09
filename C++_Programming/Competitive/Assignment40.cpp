/*
    For each bill you pay using CRED, you earn X CRED coins.
    At CodeChef store, each bag is worth 100 CRED coins.
    Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

    Input : 3
            10 10
            20 4
            70 7

    Output : 1
             0
             4
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	int bag = 100;
	int ans = 0;
	std::vector<int> arr(2);
	
	while(t--)
	{
	    for(int i = 0; i < arr.size(); i++)
	    {
	        cin >> arr[i];
	    }
	    
	    ans = arr[0] * arr[1];
	    
	    if(ans < 100)
	    {
	        cout << 0 << endl;
	    }
	    else
	    {
	        cout << (ans/bag) << endl;
	    }
	}
	
	return 0;

}
