/*
    In Chefland, there are X schools, and each school has Y students.
    The year end results are in and a total of Z students passed the exams.
    Assuming that all students appeared for the exams, 
    find whether the number of students who passed in Chefland was strictly greater than 50%.

    Input : 4
            2 10 12
            2 10 3
            1 5 3
            3 6 9

    Output : YES
             NO
             YES
             NO
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	
	cin >> t;
	
	double arr[3] = {0.0};
	double res = 0.0;
	int a = 0;
	
	while(t--)
	{
	    for(int i = 0; i < 3; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    
	    res = double((arr[2]) / (arr[0] * arr[1]));
	    
	    a = ceil(res * 100);
	    
	    if(a <= 50)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        cout << "YES" << endl;
	    }
	    
	    
	}
	
	return 0;
}
