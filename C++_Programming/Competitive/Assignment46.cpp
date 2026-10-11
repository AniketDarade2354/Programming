/*

    Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

    Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
    Obtaining every bit of Helium-3 from the moon's surface
    Moving forward, the project requires some government funding for completion, which comes under one condition: 
    to prove its worth, the project should power Chefland by generating at least 
    A units of power each year for the next B years.

    Help Chef determine whether the group will get funded assuming that the moon has 
    X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.

    Input : 4
            1 2 3 4
            4 3 2 1
            2 18 9 4
            1 100 2 49
    
    Output : Yes
             No
             Yes
             No
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	int first = 0, second = 0;
	int arr[4] = {0};
	
	while(t--)
	{
	    for(int i = 0; i < 4; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    first = arr[0] * arr[1];
	    second = arr[2] * arr[3];
	    
	    
	    if(second >= first)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	    
	    first = 0;
	    second = 0;
	}
	
	return 0;

}

