SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    newnode -> data = data;
    newnode -> next = NULL;
    
    if (head == NULL)
        head = newnode;
    
    else {
        newnode -> data = data;
        SinglyLinkedListNode *ptr = head;
        while (ptr -> next != NULL)
            ptr = ptr ->next;
        ptr -> next = newnode;
    }
    return head;
}
