void printLinkedList(SinglyLinkedListNode* head) {
    if (head == NULL)
    return;
    
    else{
        SinglyLinkedListNode* ptr = head;
        while(ptr != NULL) {
            cout << ptr -> data << endl;
            ptr = ptr -> next;
        }
    }
}
