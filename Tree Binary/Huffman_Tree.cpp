#include <iostream>
using namespace std;
struct Letter {
	char name;
	int frequency;
};

struct Node {
	char name;
	int sumFre; // tong tan so
	Node * left;
	Node * right;
	Node (Letter l){
		name = l.name;
		sumFre = l.frequency;
		left = NULL;
		right = NULL;
	}
	Node (){
		name = '';
		sumFre = 0;
		left = NULL;
		right = NULL;
	}
};
//Sap xep mang cac ki tu theo thu tu tang dan tan so
int partition (Letter list[], low, high)
{
    pivot = list[high].frequency;  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        
        if (list[j].frequency <= pivot)
        {
            i++;
            Letter temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
    }
    Letter temp = list[i+1];
	list[i+1] = list[high];
    list[high] = temp;
    return (i + 1);
}
void sort(Letter list[], low, high)
{
    if (low < high)
    {
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

// them 1 nut vao cay huffman khi cay ta da co 1 cay huffman ban dau
Node *insertNode(Node* root, Letter l) {
	Node* newNode = new Node(l);
	Node* temp = root;
	root = new Node();
	root->sumFre = temp->sumFre + l->frequency;
	
	if (l->frequency < root->sumFre)
	{
		root->left = newNode;
		root->right = temp;
	}
	else {
		root->left = temp;
		root->right = newNode;
	}
	return root;
}

//Tao 1 cay huffman tu 1 danh sach cac ky tu co tan so
Node* creatHuffmanTree(Letter list[], n) {
	// Sap xep cac ky tu theo tan so
	sort(list,0,n-1);
	Node *node1 = new Node(list[0]);
	Node *node2 = new Node(list[1]);
	Node *root = new Node();
	root->left = node1;
	root->right = node2;
	root->sumFre = node1->sumFre + node2->sumFre;
	for (int i=2; i<n; i++) {
		root = insertNode(root,list[i]);
	}
	return root;
	
	
}
