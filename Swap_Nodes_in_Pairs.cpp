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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next==NULL)
        {
            return head;
        }
        head = head->next;
        ListNode* curr = NULL;
        while(temp && temp->next)
        {
            ListNode* prev = temp->next;
            temp->next = prev->next;
            prev->next = temp;
            if(curr!=NULL)
            {
                curr->next = prev;
            }
            curr = temp;
            temp = temp->next; 
        }
        return head;
    }
};
