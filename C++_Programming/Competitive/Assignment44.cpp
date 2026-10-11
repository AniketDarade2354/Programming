/*
    In Chefland, a tennis game involves 4 referees.
    Each referee has to point out whether he considers the ball to be inside limits or outside limits. 
    The ball is considered to be IN if and only if all the referees agree that it was inside limits.

    Given the decision of the 4 referees, 
    help Chef determine whether the ball is considered inside limits or not.

    Input : 4
            1 1 0 0
            0 0 0 0
            0 0 0 1
            1 1 1 1
    
    Output : OUT
             IN
             OUT
             OUT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t = 0;
    
    cin >> t;
    
    int arr[4] = {0};
    int count = 0;
    
    while(t--)
    {
        for(int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        
        for(int i = 0; i < 4; i++)
        {
            if(arr[i] == 0)
            {
                count++;
            }
        }
        
        
        if(count == 0)
        {
            cout << "OUT" << endl;
        }
        else if(count == 1)
        {
            cout << "OUT" << endl;
        }
        else if(count == 2)
        {
            cout << "OUT" << endl;
        }
        else if(count == 3)
        {
            cout << "OUT" << endl;
        }
        else if(count == 4)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << count << endl;
        }
        
        count = 0;
    }
    
    return 0;
}
