/*
    A new TV streaming service was recently started in Chefland called the Chef-TV.
    A group of N friends in Chefland want to buy Chef-TV subscriptions.
    We know that 6 people can share one Chef-TV subscription. 
    Also, the cost of one Chef-TV subscription is X rupees. 
    Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.

    Input : 3
            1 100
            12 250
            16 135

    Output : 100
             500
             405
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t = 0;
    int sub = 6; 
    
    cin >> t;
    
    int arr[2] = {0};
    double res = 0.0;
    
    while(t--)
    {
        for(int i = 0; i < 2; i++)
        {
            cin >> arr[i];
        }
    
        if(arr[0] < sub)
        {
            cout << arr[1] << endl;
        }
        else
        {
           res = double(arr[0]) / double(sub);
          
           
           cout << (static_cast<int>(ceil(res))) * arr[1] << endl;
        }
        
    }
    
    return 0;
}
