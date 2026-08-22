#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums(5); // size 5 with zero initiallized

    nums.push_back(11);
    nums.push_back(21);
    nums.push_back(51);
    nums.push_back(101);
    nums.push_back(121);
    
    cout << nums[0] << endl;    // 0
    cout << nums[1] << endl;    // 0
    cout << nums[2] << endl;    // 0
    cout << nums[3] << endl;    // 0
    cout << nums[4] << endl;    // 0
    cout << nums[5] << endl;    // 11
    cout << nums[6] << endl;    // 21
    cout << nums[7] << endl;    // 51
    cout << nums[8] << endl;    // 101
    cout << nums[9] << endl;    // 111
    


    return 0;
}