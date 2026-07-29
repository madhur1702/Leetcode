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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode(-1);
        vector<int> arr;
        for(ListNode* head : lists)
        {
            ListNode* temp = head;
            while(temp)
            {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* head = dummy;
        for(int i : arr)
        {
            ListNode* temp1 = new ListNode(i);
            head->next = temp1;
            head = head->next;
        }
        return dummy->next;
    }
};
