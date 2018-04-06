#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Reverse Linked List", "[reverseList]")
{
    Solution s;

    SECTION("robust")
    {
        REQUIRE(s.reverseList2(nullptr) == nullptr);
    }

    SECTION("common")
    {
        ListNode l1(1);
        ListNode l2(2);
        ListNode l3(3);
        l1.next=&l2;
        l2.next=&l3;
        s.reverseList2(&l1);
        REQUIRE(l1.val==3);
        REQUIRE(l2.val==2);
        REQUIRE(l3.val==1);
    }
}