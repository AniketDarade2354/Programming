/*
    There are 4 companies in the markets of Chefland, A, B, C, and D.

    This year,
    Company A made a profit of P lakh rupees, Company B made a profit of Q lakh rupees,
    Company C made a profit of R lakh rupees, Company D made a profit of S lakh rupees.
    There is said to be a monopoly in the market if the profit made by one company is 
    strictly greater than the sum of profits made by all other companies.

    Determine if there is a monopoly in the market or not.
    
    Input : 4
            1 1 1 10
            30 20 6 4
            100 90 3 4
            14 15 16 17
    
    Output : YES
             NO
             YES
             NO
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int arr[4] = {0};
    int max = 0;
    int sum = 0;
    int count = 0;
    
    while(t--)
    {
        for(int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        
        
        for(int i = 0 ; i < 4; i++)
        {
            if(max != arr[i])
            {
                sum = sum + arr[i];
            }
            else
            {
                count++;
            }
        }
        
        if(sum != 0 && max > sum && count < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        max = 0;
        sum = 0;
        count = 0;
    }
    
    
    return 0;
}
