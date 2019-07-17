#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Remove Element", "[removeElement]")
{
    Solution s;

    SECTION("common")
    {
        std::vector<int> vi1{3, 2, 2, 3};
        REQUIRE(s.removeElement(vi1, 3) == 2);
        std::vector<int> vi2{0, 1, 2, 2, 3, 0, 4, 2};
        REQUIRE(s.removeElement(vi2, 2) == 2);
    }
}