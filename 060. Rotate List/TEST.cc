#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Rotate List", "[rotateRight]")
{
    Solution s;

    SECTION("robust")
    {
        ListNode l1(1);
        ListNode l2(2);
        l1.next = &l2;

        auto Result = s.rotateRight(&l2, 99);
            REQUIRE(Result->val == 2);

        Result = s.rotateRight(&l1, 3);
        for (auto i = 2; i != 0; --i)
        {
            REQUIRE(Result->val == i);
            Result = Result->next;
        }
    }

    SECTION("common")
    {
        ListNode l1(1);
        ListNode l2(2);
        ListNode l3(3);
        ListNode l4(4);
        ListNode l5(5);
        l1.next = &l2;
        l2.next = &l3;
        l3.next = &l4;
        l4.next = &l5;

        auto Result = s.rotateRight(&l1, 2);
        REQUIRE(Result->val == 4);
        Result = Result->next;
        REQUIRE(Result->val == 5);
        Result = Result->next;
        REQUIRE(Result->val == 1);
        Result = Result->next;
        REQUIRE(Result->val == 2);
        Result = Result->next;
        REQUIRE(Result->val == 3);
    }
}