class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        /*stack<int> st;
        ListNode* temp = head;

        while (temp != NULL) {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (!st.empty()) {
            int top_val = st.top();
            if (top_val != temp->val)
                return false;
            st.pop();
            temp = temp->next;
        }
        return true;*/

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        if (fast != NULL)
            slow = slow->next;

        slow = reverseLL(slow);
        fast = head;

        while (slow != NULL && fast != NULL) {
            if (slow->val != fast->val)
                return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};
