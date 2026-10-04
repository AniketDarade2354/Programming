/*
    Input:
            4
            3
            4 1 6
            7
            3 7 2 1 1 5 3
            5
            8 2 9 4 9
            2
            1 2

    Output:
            10  (4 + 6)
            12  (7 + 5)
            17  (8 + 9)
            3   (1 + 2)
            */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    
    cin >> t;
    
    vector<int> result;

    int n = 0;
    int max = 0;
    int max1 = 0;
    
    while(t != 0)
    {   
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        // your code goes here
        
        for(int i = 0; i < n ; i++)
        {
            if(max < a[i])
            {
                max1 = max;
                max = a[i];
            }
            else if(max != a[i] && max1 < a[i])
            {
                max1 = a[i];
            }
        }
        
        result.push_back(max+max1);
        max = 0;
        max1 = 0;        
        t--;
    }

    for(int i = 0 ; i < result.size();i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
