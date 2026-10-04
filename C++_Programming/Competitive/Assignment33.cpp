/*
        MIN to MAX

    Input : 
            3
            2
            1 2
            4
            2 2 3 4
            1
            1
    
    Output :
            1
            2
            0

*/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int countNonMinimum(std::vector<int>& nums) 
    {
        // write your code here
        
        if(nums.empty())
        {
            return 0;
        }
        
        int count = 0;
        int minimum = nums[0];
        
        for(auto m : nums)
        {
            minimum = std::min(minimum, m);
        }

        for(auto m : nums)
        {
            if(m == minimum)
            {
                count++;
            }
        }
        
        return nums.size()-count;
    }
};

