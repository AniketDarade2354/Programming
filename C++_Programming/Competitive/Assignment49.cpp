/*

    There are N children and Chef wants to give them 1 candy each. 
    Chef already has X candies with him. To buy the rest, he visits a candy shop. 
    In the shop, packets containing exactly 4 candies are available.

    Determine the minimum number of candy packets Chef must buy so that he is able to give 
    1 candy to each of the N children.

    Input : 4
            20 12
            10 100
            10 9
            20 9
        
    Output : 2
             0
             1
             3
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    double arr[2] = {0.0};
    double ans = 0.0;
    int res = 0;
    
    while(t--)
    {
        for(int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }
        
        ans = arr[0] - arr[1];
        
        res = ceil(ans / double(4));
        
        if(res > 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << 0 << endl;        
        }
            
    }
    
    return 0;
}
