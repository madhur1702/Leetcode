class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) { 
            return head;
        }

        while (head != nullptr && head->val == val) {
            head = head->next;
        }

        ListNode* p = head;
        ListNode* q = head;

        while (q != nullptr) {
            if (q->val == val) {
                p->next = q->next; 
            } else {
                p = q;
            }
            q = q->next; 
        }
delete q;
        return head;
    }
};
