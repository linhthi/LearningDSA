#include <iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* left;
		Node* right;
		Node(int d) {
			data = d;
			left = NULL;
			right = NULL;
		}
};
Node* insert(Node* root, int value) {
	if (root == NULL)
		return new Node(value);
	else if (root->data > value)
		root->left = insert(root->left, value);
	else
		root->right = insert(root->right, value);
	return root;
}

Node* findMin(Node *root) {
   	if (root == NULL) {
      return root; // or undefined.
   	}
   	if (root->left != NULL) {
      return findMin(root->left); // left tree is smaller
   	}
   	return root;
}

Node* Delete(Node* root, int value) {
	if (root == NULL)
	{
     	return NULL;
  	}
  	if (root->data > value)
	{  // data is in the left sub tree.
     	root->left = Delete(root->left, value);
  	}
	else if (root->data < value)
	{ // data is in the right sub tree.
	    root->right = Delete(root->right, value);
	}
	else {
	    // case 1: no children
	    if (root->left == NULL && root->right == NULL)
		{
	        delete(root); // wipe out the memory
	        root = NULL;
	    }
	    // case 2: one child (right)
	    else if (root->left == NULL)
		{
	        Node *temp = root; // save current node as a backup
	        root = root->right;
	        delete temp;
	    }
	    // case 3: one child (left)
	    else if (root->right == NULL)
		{
	        Node *temp = root; // save current node as a backup
	        root = root->left;
	        delete temp;
	    }
	     // case 4: two children
	    else
		{
	        Node *temp = findMin(root->right); // find minimal value of right sub tree
	        root->data = temp->data; // duplicate the node
	        root->right = Delete(root->right, temp->data); // delete the duplicate node
	    }
	  }
	  return root; // parent node can update reference
}
bool search(Node* root, int value) {
	if (value == root->data)
		return true;
	else if (value < root->data)
	{
		if (root->left == NULL)
			return false;
		else
			return search(root->left, value);
	}
	else if (value > root->data)
	{
		if (root->right == NULL)
			return false;
		else
			return search(root->right, value);
	}
	
	return false;
}

int main() {
	Node* root = new Node(4);
	root = insert(root, 8);
	root = insert(root, 7);
	root = insert(root, 2);
	root = insert(root, 9);
	root = insert(root, 1);
	root = insert(root, 6);
	
	cout << "Is node has value = 8 in Binary Search Tree: " << search(root,8) << endl;
	cout << "Is node has value = 7 in Binary Search Tree: " << search(root,7) << endl;
	root = Delete(root,7);
	cout << "-----After delete!------" << endl;
	cout << "Is node has value = 7 in Binary Search Tree: " << search(root,7) << endl;
	return 0;
}
