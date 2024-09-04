class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* last = NULL;
        DLLNode* current = head;
        
        while(current != NULL) {
            last = current -> prev;
            current -> prev = current -> next;
            current -> next = last;
            
            current = current -> prev;
        }
        
        if (last != NULL)
            head = last -> prev;
            
        return head;
    }
};
