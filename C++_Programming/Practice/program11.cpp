#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;      // empty
    vector<int> v1(5);   // size n, zero-initialized
    vector<int> v2(6, 0);  // size n, filled with val
    vector<vector<int>> grid(10, vector<int>(5, 0));    // 2D grid
    vector<int> v3 = {1, 2, 3};

    return 0;
}