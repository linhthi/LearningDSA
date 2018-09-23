// The insertNodeAtPosition function.(Ham xoa 1 node o vi tri positions

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
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if (position == 0) {
        return head->next;
    }
    else {
        SinglyLinkedListNode* p = head;
        for (int i=1; i<position; i++) {
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
