class Solution {
public:
    int reverse(int x)
    {
        long Result = 0, UpperEdge = INT32_MAX, LowerEdge = INT32_MIN;
        while (x != 0)
        {
            Result = Result * 10 + x % 10;
            x /= 10;
        }
        if (Result > UpperEdge || Result < LowerEdge)
        {
            return 0;
        } else
        {
            return Result;
        }
    }
};