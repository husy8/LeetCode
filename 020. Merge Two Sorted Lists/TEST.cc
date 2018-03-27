#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "../Catch2/single_include/catch.hpp"
#include "Solution.hpp"

TEST_CASE("Merge Two Sorted Lists", "[mergeTwoLists]")
{
    Solution s;

    SECTION("robust")
    {
        REQUIRE(s.mergeTwoLists(nullptr, nullptr) == nullptr);

        ListNode l1(1);
        ListNode l2(2);
        ListNode l3(3);
        l1.next = &l2;
        l2.next = &l3;

        auto Result = s.mergeTwoLists(&l1, nullptr);
        for (auto i = 1; i != 4; ++i)
        {
            REQUIRE(Result->val == i);
            Result = Result->next;
        }

        Result = s.mergeTwoLists(nullptr, &l1);
        for (auto i = 1; i != 4; ++i)
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
        l1.next = &l4;
        l2.next = &l3;

        auto Result = s.mergeTwoLists(&l1, &l2);

        Result = s.mergeTwoLists(nullptr, &l1);
        for (auto i = 1; i != 5; ++i)
        {
            REQUIRE(Result->val == i);
            Result = Result->next;
        }
    }
}