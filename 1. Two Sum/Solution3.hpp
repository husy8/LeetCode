#include <vector>
#include <map>

using std::vector;
using std::map;

class Solution3 {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> Result;

		map<int, int> map;
		for (auto i = nums.begin(); i != nums.end(); ++i)
		{
			auto j = map.find(target - (*i));
			if (j != map.end())
			{
				Result.push_back(j->second);
				Result.push_back(i - nums.begin());
				break;
			}
			map[(*i)] = i - nums.begin();
		}

		return Result;
	}
};