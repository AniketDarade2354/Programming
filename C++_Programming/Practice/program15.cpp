#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums(5);

    nums[0] = 11;
    nums[1] = 21;
    nums[2] = 51;
    nums[3] = 101;
    nums[4] = 121;

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "\t";
    }
    cout << endl;

    nums.erase(nums.begin()+2);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "\t";
    }
    cout << endl;

    return 0;
}