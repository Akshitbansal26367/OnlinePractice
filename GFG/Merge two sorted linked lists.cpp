class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* newNode = new Node(-1);
        Node* newHead = newNode;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1 -> data <= temp2 -> data) {
                newNode -> next = temp1;
                temp1 = temp1 -> next;
                
            } else {
                newNode -> next = temp2;
                temp2 = temp2 -> next;
            }
            newNode = newNode -> next;
        }
        
        if(temp1 != NULL) {
            newNode -> next = temp1;
            newNode = newNode -> next;
        }
        
        if(temp2 != NULL) {
            newNode -> next = temp2;
            newNode = newNode -> next;
        }
        return newHead -> next;
    }
};
