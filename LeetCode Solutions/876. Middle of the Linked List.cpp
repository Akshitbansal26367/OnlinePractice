class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        /*ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        int midNode = (count / 2) + 1;
        temp = head;

        while (temp != NULL) {
            midNode--;

            if (midNode == 0)
                break;
            temp = temp->next;
        }
        return temp;*/
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
