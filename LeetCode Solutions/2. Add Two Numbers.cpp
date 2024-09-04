class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* current = dummyNode;

        while (temp1 != NULL || temp2 != NULL) {
            int sum = carry;

            if (temp1 != NULL)
                sum += temp1->val;
            if (temp2 != NULL)
                sum += temp2->val;

            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;
            current->next = newNode;
            current = current -> next;

            if (temp1 != NULL)
                temp1 = temp1->next;

            if (temp2 != NULL)
                temp2 = temp2->next;
        }

        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            current -> next = newNode;
        }

        return dummyNode -> next;
    }
};
