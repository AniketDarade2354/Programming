#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;

    nums.push_back(11);
    nums.push_back(21);
    nums.push_back(51);
    nums.push_back(101);
    nums.push_back(121);
    
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    cout << nums[4] << endl;
    

    return 0;
}