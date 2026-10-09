/*

	Each pizza consists of 4 slices. 
	There are N friends and each friend needs exactly X slices.

	Find the minimum number of pizzas they should order to satisfy their appetite.

	Input : 4
			1 5
			2 6
			4 3
			3 5
	
	Output : 2
			 3
			 3
			 4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t = 0;
    
    cin >> t;
    
    int arr[2] = {0};
    int slices = 4;
    double ans = 0;
    int res = 0;
    
    while(t--)
    {
        for(int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }
        
        ans = arr[0] * arr[1];
        
        res = ceil(ans / slices);
        
        cout << res << endl;
        
    }
    
    return 0;
}
