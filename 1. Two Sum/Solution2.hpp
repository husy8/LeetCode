#include <vector>
#include <map>

using std::vector;
using std::map;

class Solution2 {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> Result;

		map<int, int> map;
		for (auto i = nums.begin(); i != nums.end(); ++i)
		{
			map[(*i)] = i - nums.begin();
		}
		for (auto i = nums.begin(); i != nums.end(); ++i)
		{
			auto j = map.find(target - (*i));
			// 避免 nums 里有一个元素恰好是 target/2 时输出不正确的结果
			if (j != map.end() && (i - nums.begin()) != j->second)
			{
				Result.push_back(i - nums.begin());
				Result.push_back(j->second);
				break;
			}
		}

		return Result;
	}
};