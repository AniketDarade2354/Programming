/*
    It's the sale season again and Chef bought items worth a total of X rupees. 
    The sale season offer is as follows:

    if X≤100, no discount.
    if 100<X≤1000, discount is 25 rupees.
    if 1000<X≤5000, discount is 100 rupees.
    if X>5000, discount is 500 rupees.
    Find the final amount Chef needs to pay for his shopping.

    Input : 4
            15
            70
            250
            1000

    Output : 15
             70
             225
             975 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	int x = 0;
	
	while(t--)
	{
	   cin >> x;
	   
	   if(x <= 100)
	   {
	       cout << x << endl;
	   }
	   else if(x > 100 && x <= 1000)
	   {
	       cout << (x - 25) << endl;
	   }
	   else if(x > 1000 && x <= 5000)
	   {
	       cout << (x - 100) << endl;
	   }
	   else
	   {
	       cout << (x - 500) << endl;
	   }
	   
	}
	
	return 0;

}
