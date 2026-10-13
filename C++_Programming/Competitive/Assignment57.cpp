/*

    Given an Integer N, write a program to reverse it.

    Input : 4
            12345
            31203
            2123
            2300

    
    Output : 54321
             30213
             3212
             32
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int n = 0;
    int digit = 0;
    int rev = 0;
    
    while(t--)
    {
        cin >> n;
        
        while(n)
        {
            digit = n % 10;
            
            rev = rev * 10 + digit;
            
            n = n / 10;
        }
        
        cout << rev << endl;
        rev = 0;
    }
    
    return 0;
}
