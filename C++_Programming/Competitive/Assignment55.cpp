/*
    There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. Everyone has a demand each:

    Alice wants the temperature to be at least A degrees.
    Bob wants the temperature to be at most B degrees.
    Charlie wants the temperature to be at least C degrees.
    Can they all agree on some temperature, or not?

    Input : 4
            30 35 25
            30 35 40
            30 35 35
            30 25 35

    
    Output : Yes
             No
             Yes
             No
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t =0;
    
    cin >> t;
    
    int arr[3] = {0};
    
    while(t--)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        
        if(arr[0] <= arr[1] && arr[2] <= arr[1])
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
