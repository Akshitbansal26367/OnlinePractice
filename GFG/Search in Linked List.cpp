class Solution {
  public:
    bool searchKey(int n, struct Node* head, int key) {
        Node* temp = head;
        
        while(temp -> next != NULL) {
            if(temp -> data == key)
                return true;
            temp = temp -> next;
        }
        return false;
    }
};