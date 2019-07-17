#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Implement strStr()", "[strStr]")
{
    Solution s;

    SECTION("robust")
    {
        std::string haystack = "";
        std::string needle = "";
        std::string test = "anything";
        REQUIRE(s.strStr(haystack, needle) == 0);
        REQUIRE(s.strStr(haystack, test) == -1);
        REQUIRE(s.strStr(test, needle) == 0);
        haystack = "went";
        needle = "He went bankrupt in early 1929, and lost control of both publications.";
        REQUIRE(s.strStr(haystack, needle) == -1);
    }

    SECTION("common")
    {
        std::string haystack = "He went bankrupt in early 1929, and lost control of both publications.";
        std::string needle = "went";
        std::string test = "anything";
        REQUIRE(s.strStr(haystack, needle) == 3);
        REQUIRE(s.strStr(haystack, test) == -1);
    }
}