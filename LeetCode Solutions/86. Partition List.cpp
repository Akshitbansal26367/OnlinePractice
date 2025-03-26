class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* beforeLL = new ListNode(-1);
        ListNode* beforeHead = beforeLL;
        ListNode* afterLL = new ListNode(-1);
        ListNode* afterHead = afterLL;

        while (head != NULL) {
            if (head->val < x) {
                beforeHead->next = head;
                beforeHead = beforeHead->next;
            } else {
                afterHead->next = head;
                afterHead = afterHead->next;
            }
            head = head->next;
        }

        afterHead->next = NULL;
        beforeHead->next = afterLL->next;
        return beforeLL->next;
    }
};
