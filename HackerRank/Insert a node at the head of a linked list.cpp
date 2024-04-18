SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    newnode -> data = data;
    newnode -> next = NULL;
    
    if(head == NULL)
        head = newnode;
    
    else {
        newnode -> next = head;
        head = newnode;
    }
    return head;
}
