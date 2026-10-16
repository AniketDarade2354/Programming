#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int arr[3] = {0};
	int i = 0;
	
	while(t--)
	{
	    for(i = 0; i < 3; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    for(i = 1; i <= arr[0]; i++)
	    {
	        if(arr[2] == 0 || arr[2] == (i*arr[1]))
	        {
	            cout << "YES" << endl;
	            break;
	        }
	        
	        
	        if(arr[2] < (i*arr[1]) || i == arr[0])
	        {
	            cout << "NO" << endl;
	            break;
	        }
	    }
	    
	    
	}
	
	return 0;

}
