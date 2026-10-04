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

class Solution {
public:
    int countNonMinimum(std::vector<int>& nums) 
    {
        // write your code here 
        int count = 0;
        int min = nums[0];
        
        for(int i = 1; i < nums.size();i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > min)
            {
                count++;
            }
        }
        
        return count;
    }
};

