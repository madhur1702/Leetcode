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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dnode = new ListNode(-1);
        dnode->next = head;
        if(!head || !head->next)
        {
            return head;
        }
        ListNode* temp = dnode;
        ListNode* prev = temp->next;
        ListNode* curr = temp->next->next;
        while(prev)
        {
            if(curr && prev->val == curr->val)
            {
                while(curr && prev->val == curr->val)
                {
                    curr = curr->next;
                }
                prev = curr;
                if(curr) curr = curr->next;
            }
            else
            {
                temp->next = prev;
                temp = temp->next;
                prev = curr;
                if(curr)
                {
                    curr = curr->next;
                }
            }
        }
        temp->next = prev;
        return dnode->next;
    }
};
