/*
    Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts
    to do the assignments at X pm. Each assignment takes him 1 hour to complete. 
    Can you tell whether he'll be able to complete all assignments on time or not?

    Input : 2
            7
            9

    Output : Yes
             No

    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	int assignment = 3;
	int pm = 10;
	int iTime = 0;
	
	while(t--)
	{
	    cin >> iTime;
	    
	    if((pm - iTime) >= assignment)
	    {
	       cout << "Yes" << endl; 
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	}
	
	return 0;

}
