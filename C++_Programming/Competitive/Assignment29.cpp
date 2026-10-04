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

int maxAddition(int arr[], int size)
{
    /*if(size < 2)
    {
        return 0;
    }
*/
    int max = 0;

    int i = 0;
    int j = 1;

    while(i != size-1)
    {
        
        if(j == size)
        {
            j = 0;
            i++;
        }

        if(arr[i] != arr[j] && max < (arr[i] + arr[j]))
        {
            max = arr[i] + arr[j];
        }

        j++;
    }

    return max;
}

int main() {
    int t;
    
    cin >> t;
    
    vector<int> result;

    while(t != 0)
    {
        int n;
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        result.push_back(maxAddition(a, n));
        // your code goes here

        t--;
    }


    for(int i = 0 ; i < result.size();i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
