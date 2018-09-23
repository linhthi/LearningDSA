// The insertNodeAtTail function.

/*
 * SinglyLinkedListNode duoc dinh nghia nhu sau
 *class SinglyLinkedListNode {
 		int data;
		SinglyLinkedListNode* next;
		SinglyLinkedListNode(int data) {
		this->data = data;
		this->next = NULL;
	} 
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    if (head == NULL) {
        return temp;
    }
    SinglyLinkedListNode* p;
    for (p=head; p->next!=NULL; p=p->next);
    p->next = temp;
    return head;

}
