#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("TwoSumSolution1", "[twoSum]")
{
    Solution1 s;

    std::vector<int> nums1{2, 7, 11, 15};
    int target1 = 9;
    REQUIRE(s.twoSum(nums1, target1) == std::vector<int>{0, 1});

    std::vector<int> nums2{0, 6, -1, 8};
    int target2 = 7;
    REQUIRE(s.twoSum(nums2, target2) == std::vector<int>{2, 3});

    std::vector<int> nums3{0, 7, 11, 53};
    int target3 = 53;
    REQUIRE(s.twoSum(nums3, target3) == std::vector<int>{0, 3});
}

TEST_CASE("TwoSumSolution2", "[twoSum]")
{
    Solution2 s;

    std::vector<int> nums1{2, 7, 11, 15};
    int target1 = 9;
    REQUIRE(s.twoSum(nums1, target1) == std::vector<int>{0, 1});

    std::vector<int> nums2{0, 6, -1, 8};
    int target2 = 7;
    REQUIRE(s.twoSum(nums2, target2) == std::vector<int>{2, 3});

    std::vector<int> nums3{0, 7, 11, 53};
    int target3 = 53;
    REQUIRE(s.twoSum(nums3, target3) == std::vector<int>{0, 3});
}

TEST_CASE("TwoSumSolution3", "[twoSum]")
{
    Solution3 s;

    std::vector<int> nums1{2, 7, 11, 15};
    int target1 = 9;
    REQUIRE(s.twoSum(nums1, target1) == std::vector<int>{0, 1});

    std::vector<int> nums2{0, 6, -1, 8};
    int target2 = 7;
    REQUIRE(s.twoSum(nums2, target2) == std::vector<int>{2, 3});

    std::vector<int> nums3{0, 7, 11, 53};
    int target3 = 53;
    REQUIRE(s.twoSum(nums3, target3) == std::vector<int>{0, 3});
}