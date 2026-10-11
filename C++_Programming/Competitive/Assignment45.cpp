/*

    A problem setter is called an expert if at least 50% of their problems are approved by Chef.
    Munchy submitted X problems for approval. 
    If Y problems out of those were approved, find whether Munchy is an expert or not.

    Input : 4
            5 3
            1 1
            4 1
            2 1
    
    Output : YES
             YES
             NO
             YES
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t = 0;
    
    cin >> t;
    
    double arr[2] = {0};
    double ans = 0.0;
    int res = 0;
    
    while(t--)
    {
        for(int i = 0; i <2; i++)
        {
            cin >> arr[i];
        }
        
        ans = arr[1] / arr[0];
        
        res = ans * 100;
        
        
        if(res >= 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    
    return 0;
}
