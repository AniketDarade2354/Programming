/*  CodeChef
    Find maximum in an Array

Given a list of NN integers, representing height of mountains. Find the height of the tallest mountain.
Input:

    First line will contain T, number of testcases. Then the testcases follow.
    The first line in each testcase contains one integer, N.
    The following line contains N space separated integers: the height of each mountains.

    1   (1 - 10)
    5   (1 - 100000)
    4 7 6 3 1
Output:
        7
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.
Constraints

*/

#include <iostream>
#include <vector>

int maxNumber(
                const std::vector<int> &arr     // Reference
            )
{
    int max = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{   
    int testcases = 0;
    int size = 0;

    std::cin >> testcases ;
    
    if(testcases < 0 || testcases > 10)
    {
        return 1;
    }

    std::vector<int> tests(testcases);
    std::vector<int> result;

    while (testcases != 0)
    {
        std::cin >> size;

        std::vector<int> arr(size);

        for(int i = 0; i < size; i++)
        {
            std::cin >> arr[i];
        }    

        result.push_back(maxNumber(arr));

        testcases--;
    }
    
    std::cout << std::endl;

    for(int i = 0; i < result.size(); i++)
    {
        std::cout << i+1 << " : " << result[i] << std::endl;
    }

    return 0;
}
