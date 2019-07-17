#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int> &vInputArray, const int &iValue2Remove)
    {
        int iNewSize = 0;
        for (auto i = vInputArray.begin(); i != vInputArray.end(); ++i)
        {
            if (*i != iValue2Remove)
            {
                vInputArray.at(iNewSize) = *i;
                ++iNewSize;
            }
        }
        vInputArray.erase(vInputArray.begin() + iNewSize, vInputArray.end());
        return vInputArray.size();
    }
};