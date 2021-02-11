// C program for different tree traversals
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

void printInorder(struct Node* node)
{
	// return if the tree is empty
    if (node == NULL)
    return;

    // create an empty stack and push the root node
    stack<Node*> stack;
    stack.push(node);

    while(!stack.empty())
    {
        node = stack.top();
        cout << node->data << " ";
        stack.pop();

        if(node->right)
            stack.push(node->right);
        if(node->left)
            stack.push(node->left);
    }
}



/* Driver program to test above functions*/
int main()
{
	struct Node *root = new Node(1);
	root->left			 = new Node(2);
	root->right		 = new Node(3);
	root->left->left	 = new Node(4);
	root->left->right = new Node(5);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	return 0;
}

