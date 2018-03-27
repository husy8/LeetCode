#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Reverse Integer", "[reverse]")
{
    Solution s;

    SECTION("robust")
    {
        REQUIRE(s.reverse(0) == 0);
        REQUIRE(s.reverse(2147483647) == 0);
    }

    SECTION("common")
    {
        REQUIRE(s.reverse(-546198) == -891645);
        REQUIRE(s.reverse(541651) == 156145);
        REQUIRE(s.reverse(231650000) == 56132);
        REQUIRE(s.reverse(-561600) == -6165);
    }
}