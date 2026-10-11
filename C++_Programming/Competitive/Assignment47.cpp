/*

	While Alice was drinking sugarcane juice, she started wondering about the following facts:

	The juicer sells each glass of sugarcane juice for 50 coins.
	He spends 20% of his total income on buying sugarcane.
	He spends 20% of his total income on buying salt and mint leaves.
	He spends 30% of his total income on shop rent.
	Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?

    Input : 4
			2
			4
			5
			10
    
    Output : 30
			 60
			 75
			 150
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t = 0;
    
    cin >> t;
    
    int n = 0;
    int ans = 0;
    
    double d_20 = 0.0;
    double d_30 = 0.0;
    
    while(t--)
    {
        cin >> n;
        
        d_20 = n * 10;
        
        d_30 = (double(30) / double(100)) * double(50 * n);
        
        ans = (50 * n) - (d_20 + d_20 + d_30);
              
        cout << ans << endl;
        
        d_20 = 0.0;
        d_30 = 0.0;
    }
    
    return 0;
}
