#include <string>

class Solution {
public:
    int strStr(const std::string &haystack, const std::string &needle)
    {

        if (haystack.empty() && needle.empty())
        {
            return 0;
        }

        if (haystack.size() < needle.size())
        {
            return -1;
        }

        for (auto i = haystack.begin(); i != haystack.end() - needle.size() + 1; ++i)
        {
            auto needle_pointer = needle.begin(), haystack_pointer = i;
            while (*needle_pointer == *haystack_pointer && haystack_pointer != haystack.end() &&
                   needle_pointer != needle.end())
            {
                ++needle_pointer;
                ++haystack_pointer;
            }
            if (needle_pointer == needle.end())
            {
                return i - haystack.begin();
            }
        }

        return -1;
    }
};