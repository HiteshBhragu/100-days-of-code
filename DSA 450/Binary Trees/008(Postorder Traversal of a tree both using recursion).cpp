// C program for different tree traversals
#include <iostream>
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

void printPostOrder(struct Node* node)
{
	if (node == NULL)
		return;

	printPostOrder(node->left);
	printPostOrder(node->right);
	cout << node->data << " ";
}



/* Driver program to test above functions*/
int main()
{
	struct Node *root = new Node(1);
	root->left			 = new Node(2);
	root->right		 = new Node(3);
	root->left->left	 = new Node(4);
	root->left->right = new Node(5);

	printPostOrder(root);

	return 0;
}


