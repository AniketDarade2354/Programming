/*

    You know that 1 kg of pulp can be used to make 1000 pages and 1 notebook consists of 100 pages.

    Suppose a notebook factory receives N kg of pulp, how many notebooks can be made from that?

    Input : 3
            1
            100
            50
    
    Output : 10
             1000
             500
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t = 0;
    
    cin >> t;
    
    int n = 0;
    
    while(t--)
    {
        cin >> n;
        
        n = n *10;
        
        cout << n << endl;
    }
    
    return 0;

}
