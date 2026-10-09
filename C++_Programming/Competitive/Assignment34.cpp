/*
You are given 3 numbers A,B and C.

Determine whether the average of A and B is strictly greater than C or not?

Input : 5
        5 9 6
        5 8 6
        5 7 6
        4 9 8
        3 7 2
        
Output :    YES
            YES
            NO
            NO
            YES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    double arr[3] = {0.0};
    double res = 0.0;
    
    while(t--)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        
        res = (arr[0] + arr[1]) / 2;
        
        if(res > arr[2])
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
