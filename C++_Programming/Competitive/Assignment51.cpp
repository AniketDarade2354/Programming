/*
    Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. 
    Chef wonders if it is possible for the score to become C:D at a later point in the game 
    (i.e. team 1 has scored C goals and team 2 has scored D goals). 
    Can you help Chef by answering his question?

    Input : 3
            1 5
            3 5
            3 4
            2 6
            2 2
            2 2
    
    Output : POSSIBLE
             IMPOSSIBLE
             POSSIBLE
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int arr[2] = {0};
	int brr[2] = {0};
	
	while(t--)
	{
	    for(int i = 0; i < 2; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    for(int i = 0; i < 2; i++)
	    {
	        cin >> brr[i];
	    }
	    
	    
	    if(arr[0] <= brr[0] && arr[1] <= brr[1])
	    {
	        cout << "POSSIBLE" << endl;
	    }
	    else
	    {
	        cout << "IMPOSSIBLE" << endl;
	    }
	    
	    
	}

    return 0;
}
