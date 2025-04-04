class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast -> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow -> data;
        
        /*Node* temp = head;
        int nodes_count = 0;
        while(temp -> next != NULL) {
            temp = temp -> next;
            nodes_count++;
        }
        
        temp = head;
        int middle_node = (nodes_count + 1) / 2;
        
        while(middle_node > 0) {
            temp = temp -> next;
            middle_node--;
        }
        
        return temp -> data;*/
    }
};
