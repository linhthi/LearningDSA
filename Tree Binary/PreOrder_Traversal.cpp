// C++ program for different tree traversals 
#include <iostream>
#include <stack> 
using namespace std; 
  
/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
void preOrder(Node * root) {
	stack<Node*> s;
		while (true) {
			// First print the root node and then add left node
			while (root != NULL) {
				cout << root->data << " ";
				s.push(root);
				root = root->left;
			}
			// check if Stack is emtpy, if yes, exit from everywhere
			if (s.empty()) {
				return;
			}
			// pop the element from the stack and go right to the tree
			root = s.top();
			s.pop();
			root = root->right;
		}
}
int main() {
	struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    preOrder(root); 
    return 0;
}
