/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        list<int> v;

        while (list1) {
            v.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2) {
            v.push_back(list2->val);
            list2 = list2->next;
        }

        v.sort();

        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;

        for (int val : v) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        ListNode* merge = dummy->next;
        delete dummy;
        return merge;
    }
};
