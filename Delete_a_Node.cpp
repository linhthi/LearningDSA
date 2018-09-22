#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class Node 
{
	public:
		int data;
		Node* next;
		Node(int data) {
			this->data = data;
			this->next = NULL;
		}
};
class List
{
	public:
		Node* head;
		Node* tail;
		List() {
			this->head = NULL;
			this->tail = NULL;
		}
		
		void insertNode( int nodeData) {
			Node* node = new Node(nodeData);
			if (!this->head) {
				this->head = node;
			} else {
				this->tail->next = node;
			}
			this->tail = node;
		}
};

void printNode(Node* node, ofstream& fout) {
	while (node)
	{
		fout << node->data << " ";
		node = node->next;
	}
}
void freeNode(Node* node) {
	while (node) {
		Node* temp = node;
		node = node->next;
		free(temp);
	}
}
Node* deleteNode(Node* head, int position) {
	
		int count = 1;
		Node* node = head;
		while (count < position) {
			node = node->next;
			count++;
		}
		Node* temp;
		temp = node->next;
		node->next = temp->next;
	
	return head;
}

int main() {
	ofstream fout(getenv("OUTPUT_PATH"));
	List* list = new List();
	
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		int item;
		cin >> item;
		list->insertNode(item);
	} 
	int position;
	cin >> position;
	Node* p = deleteNode(list->head, position);
	printNode(p, fout);
	freeNode(p);
	fout.close();
	return 0;
}
