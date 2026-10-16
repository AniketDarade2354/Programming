#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int arr[2] = {0};
    int count = 0;
    
    while(t--)
    {
        cin >> arr[0];
        cin >> arr[1];
        
        int brr[arr[0]] = {0};
        
        for(int i = 0; i < arr[0]; i++)
        {
            cin >> brr[i];
            
            if(arr[1] <= brr[i])
            {
                count++;
            }
        }
        
        cout << count << endl;
        count = 0;
    }
    
    return 0;
}
