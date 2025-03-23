class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev = NULL;
        
        while(head != NULL) {
            Node* nextNode = head -> next;
            head -> next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
};
