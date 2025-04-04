class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        if (head == NULL || head -> next == NULL)
            return NULL;
            
        if (x == 1) 
            return head -> next;
        
        Node* temp = head;
        Node* prev = NULL;
        while(x > 1) {
            prev = temp;
            temp = temp -> next;
            x--;
        }
        
        prev -> next = temp -> next;
        return head;
    }
};
