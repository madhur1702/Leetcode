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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> l;
        while (head != nullptr) {
            l.push_back(head->val);
            head = head->next;
        }

        int left = 0;
        int right = l.size() - 1;
        while (left < right) {
            if (l[left] != l[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
