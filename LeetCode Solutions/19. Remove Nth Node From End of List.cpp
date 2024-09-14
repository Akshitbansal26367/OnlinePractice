class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;

        for (int i = 0; i < n; i++)
            fast = fast->next;

        if (fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* slow = head;

        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};