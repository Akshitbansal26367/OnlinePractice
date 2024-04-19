SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *ptr = head;
    newnode -> data = data;
    newnode -> next = NULL;
    int count = 1;
    
    while(ptr != NULL && count != position) {
        ptr = ptr -> next;
        count++;
    }
    newnode -> next = ptr -> next;
    ptr -> next = newnode;
    return head;
}
