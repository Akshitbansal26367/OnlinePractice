SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* ptr = head;
    SinglyLinkedListNode* preptr = NULL;
    int count = 0;
    
    //Case where first node is to be deleted
    if(position == 0) {
        head = head -> next;
        delete ptr;
        return head;
    }
    
    //Traverse the node to be deleted
    while(ptr != NULL && count != position) {
        preptr = ptr;
        ptr = ptr -> next;
        count++;
    }
    
    //Link the previous node to the next node, skipping the current node
    preptr -> next = ptr -> next;
    
    //Position is out of bounds
    if(ptr -> next == NULL)
        return head;
    
    else
        return head;
}
