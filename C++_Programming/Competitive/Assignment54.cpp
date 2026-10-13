/*
    CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:

    Recent Contest Problems - contains only problems from the last 2 contests Separate Un-Attempted, 
    Attempted, and All tabs 

    Problem Difficulty Rating - the Recommended dropdown menu has various difficulty ranges so that 
    you can attempt the problems most suited to your experience

    Popular Topics and Tags Like most users, 
    Chef didn’t know that he could add problems to a personal to-do list by clicking on the magic '+' symbol on the top-right of each problem page. 
    But once he found out about it, he went crazy and added loads of problems to his to-do list without looking at their difficulty rating.

    Chef is a beginner and should ideally try and solve only problems with difficulty rating strictly
    less than 1000.

    Given a list of difficulty ratings for problems in the Chef’s to-do list, 
    please help him identify how many of those problems Chef should remove from his to-do list, 
    so that he is only left with problems of difficulty rating less than 1000.

    Input : 5
            3
            800 1200 900
            4
            999 1000 1001 1002
            5
            1 2 2 2 5000
            5
            1000 1000 1000 1000 1000
            3
            900 700 800
    
    Output : 1
             3
             1
             5
             0
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    
    int t = 0;
    
    cin >> t;
    
    while(t--)
    {
        int n =0;
        int count = 0;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
            if(arr[i] > 999)
            {
                count++;
            }
        }
        
        cout << count << endl;
        
    }
    
    return 0;
}
