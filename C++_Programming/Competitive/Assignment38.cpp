/*
    Recently Chef joined a new company. 
    In this company, the employees have to work for X hours each day from Monday to Thursday. 
    Also, in this company, Friday is called Chill Day — 
    employees only have to work for Y hours (Y<X) on Friday. 
    Saturdays and Sundays are holidays.
    Determine the total number of working hours in one week.

    Input : 3
            10 5
            12 2
            8 7

    Output : 45
             50
             39
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	int arr[2] = {0};
	int res = 0;
	
	while(t--)
	{
	    for(int i = 0; i < 2; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    res = (4 * arr[0]) + arr[1];
	    
	    cout << res << endl;
	    
	}
	
	return 0;

}
