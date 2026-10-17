#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int arr[2] = {0};
    int brr[2] = {0};
    
    int max1 = 0;
    int max2 = 0;
    
    while(t--)
    {
        for(int i = 0; i < 2; i++)
        {
            cin >> arr[i];
            
            if(max1 < arr[i])
            {
                max1 = arr[i];
            }
        }
        
        for(int i = 0; i < 2; i++)
        {
            cin >> brr[i];
            
            if(max2 < brr[i])
            {
                max2 = brr[i];
            }
        }
        
        cout << max1 + max2 << endl;
        
        max1 = 0;
        max2 = 0;
    }
    return 0;
}

