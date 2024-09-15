void addNode(Node *head, int pos, int data) {
    Node* newNode = new Node(data);
    int count = 0;
    Node* temp = head;
    
    //Case when DLL is empty
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    //Traverse to the node before the insertion position
    while(temp != NULL && count < pos) {
        temp = temp -> next;
        count++;
    }
    
    newNode -> prev = temp;
    newNode -> next = temp -> next;
    temp -> next = newNode;
    
    if (newNode -> next != NULL)
        newNode -> next -> prev = newNode;
}
