/*
    Chef wants to reach home as soon as possible. He has two options:

    Travel with his BIKE which takes X minutes.
    Travel with his CAR which takes Y minutes.
    Which of the two options is faster or do they both take same time?

    Input : 3
            1 5
            4 2
            6 6
    
    Output : BIKE
             CAR
             SAME
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int t = 0;
    
    cin >> t;
    
    int arr[2] = {0};
    
    while(t--)
    {
        for(int i = 0; i < 2;i++)
        {
            cin >> arr[i];
        }
        
        if(arr[0] == arr[1])
        {
            cout << "SAME" << endl;
        }
        else if(arr[0] > arr[1])
        {
            cout << "CAR" << endl;
        }
        else
        {
            cout << "BIKE" << endl;
        }
    }
    
    return 0;
}
