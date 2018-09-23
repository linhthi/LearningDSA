// The insertNodeAtPosition function.(Ham them 1 node vao vi tri postion)

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
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* a = new SinglyLinkedListNode(data);
    if(position==0){
        a->next = head;
        return a;
    }
    else
    {
        SinglyLinkedListNode *temp = head;
        for (int i=1; i<position; i++) {
            temp = temp->next;
        }
        a->next = temp->next;
        temp->next = a;
    }
    return head;

}
