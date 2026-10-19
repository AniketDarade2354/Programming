#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int x = 0, y = 0;

    cin >> x;
    cin >> y;
    
    int ans = y / 2;
    int res = x - y;
    int z = ans + res;
    
    cout << z << endl;

    return 0;
}

 