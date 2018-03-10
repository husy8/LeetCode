#include <vector>

using std::vector;

class Solution1 {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> Result;
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            for (auto j = i + 1; j != nums.end(); ++j)
            {
                if ((*j) == target - (*i))
                {
                    Result.push_back(i - nums.begin());
                    Result.push_back(j - nums.begin());
                    break;
                }
            }
        }
        return Result;
    }
};