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

void printPostOrder(struct Node* node)
{
	// return if the tree is empty
    if (node == NULL)
    return;

    stack<Node*> stack1;
    stack1.push(node);
    stack<Node*> result;

    while(!stack1.empty())
    {
        node = stack1.top();
        stack1.pop();
        result.push(node);

        if(node->left)
            stack1.push(node->left);
        if(node->right)
            stack1.push(node->right);
    }
    while(!result.empty())
    {
        cout << result.top()->data << " ";
        result.pop();
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

	printPostOrder(root);

	return 0;
}

