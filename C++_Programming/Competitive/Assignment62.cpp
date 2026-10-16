#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int arr[3] = {0};
	
	while(t--)
	{
	    for(int i = 0; i < 3; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    
	    if( ((arr[1] * 1) + (arr[2] * 2)) >= arr[0])
	    {
	        cout << "Qualify" << endl;
	    }
	    else
	    {
	        cout << "NotQualify" << endl;
	    }
	    
	}

    return 0;
}
