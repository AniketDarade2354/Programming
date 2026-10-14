/*

    Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

    He was offered deals from two investors. The first investor offers A dollars for 10% of his company and the second investor offers B dollars for 20% of his company. 
    Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

    For example, if the first investor offers 300 dollars for 10% of the company, 
    then the first investor's valuation of the company is 3000 dollars since 10% of 3000=300. 

    If the second investor offers 500 dollars for 20% of the company, 
    then the second investor's valuation of the company is 2500 dollars since 20% of 2500=500.

    Input : 3
            100 200
            200 100
            200 500

    
    Output : ANY
             FIRST
             SECOND
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	
	cin >> t;
	
	int arr[2] = {0};
	
	while(t--)
	{
	    for(int i = 0; i < 2; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    if((arr[0] * 10) > (arr[1] * 5))
	    {
	        cout << "FIRST" << endl;
	    }
	    else if((arr[0] * 10) < (arr[1] * 5))
	    {
	        cout << "SECOND" << endl;
	    }
	    else
	    {
	        cout << "ANY" << endl;
	    }
	}
	 
	return 0;

}
