/*
    The Chef has reached the finals of the Annual Inter-school Declamation contest.

	For the finals, students were asked to prepare 10 topics. 
	However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. 
	This means Chef can only win the contest if he gets the topics A, B or C to speak about.

	On the contest day, Chef gets topic X. 
	Determine whether Chef has any chances of winning the competition.
	Print "Yes" if it is possible for Chef to win the contest, else print "No".
	You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

    Input : 2 3 7 3
    
    Output : Yes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int arr[4] = {0};
    
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    if(arr[3] == arr[0] || arr[3] == arr[1] || arr[3] == arr[1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
