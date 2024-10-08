class Solution {
  public:
    Node* segregate(Node* head) {
        Node* temp = head;
        
        Node* zeroHead = new Node(-1);
        Node* oneHead = new Node(-1);
        Node* twoHead = new Node(-1);
        
        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        
        while(temp != NULL) {
            if (temp -> data == 0) {
                zero -> next = temp;
                zero = zero -> next;
            } else if(temp -> data == 1) {
                one -> next = temp;
                one = one -> next;
            } else {
                two -> next = temp;
                two = two -> next;
            }
            
            temp = temp -> next;
        }
        
        zero -> next = oneHead -> next != NULL ? oneHead -> next : twoHead -> next;
        one -> next = twoHead -> next;
        two -> next = NULL;
        
        Node* newHead = zeroHead -> next;
        
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        
        return newHead;
    }
};
