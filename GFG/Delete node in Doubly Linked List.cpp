class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        //Case when DLL is empty
        if (head == NULL)
            return NULL;
        
        //Case when DLL contains only single node and that node has to be removed
        if (head -> next == NULL && x == 1) {
            delete head;
            return NULL;
        }
        
        Node* temp = head;
        int count = 0;
        //Case when first element of DLL has to be deleted
        if (x == 1) {
            temp = temp -> next;
            delete head;
            return temp;
        }
        
        while(temp != NULL && count < x - 1) {
            temp = temp -> next;
            count++;
        }
        
        if (temp -> next == NULL) {
            Node* pt = temp -> prev;
            pt -> next = NULL;
            delete temp;
            return head;
        }
        
        Node* front = temp -> next;
        Node* back = temp -> prev;
        
        //Case when any middle node is deleted
        back -> next = front;
        front -> prev = back -> next;
        return head;
    }
};
