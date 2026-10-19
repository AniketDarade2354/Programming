#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int x = 0, y = 0;
    int t1 = 0;
    
    while(t--)
    {
        cin >> x >> y;
        
        t1 = x - y;
        
        if(t1 < 0)
        { 
            t1 = -t1;
        }
        
        cout << t1 << endl;
    }
    
    return 0;
}

