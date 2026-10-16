#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int arr[2] = {0};
	
	while(t--)
	{
	    for(int i = 0; i < 2; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    if((arr[0] * 10) > (arr[1] * 5))
	    {
	        cout << "FIRST" << endl;
	    }
	    else if((arr[0] * 10) < (arr[1] * 5))
	    {
	        cout << "SECOND" << endl;
	    }
	    else
	    {
	        cout << "ANY" << endl;
	    }
	}
	
	return 0;

}
