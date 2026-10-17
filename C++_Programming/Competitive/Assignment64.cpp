#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int arr[2] = {0};
    
    while(t--)
    {
        cin >> arr[0];
        cin >> arr[1];
        
        if(arr[1] == 0 || arr[0] == arr[1])
        {
            cout << 0 << endl;
        }
        else if( (arr[0] / 2) < arr[1])
        {
            cout << arr[0] - arr[1] << endl;
        }
        else
        {
            cout << arr[1] << endl;
        }
    }
    
    return 0;
}

