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
	stack<Node*> stack;

    // start from the root node (set current node to the root node)
    Node *curr = node;

    // if the current node is null and the stack is also empty, we're done
    while (!stack.empty() || curr != NULL)
    {
        // if the current node exists, push it into the stack (defer it)
        // and move to its left child
        if (curr != NULL)
        {
            stack.push(curr);
            curr = curr->left;
        }
        else
        {
            // otherwise, if the current node is null, pop an element from the stack,
            // print it, and finally set the current node to its right child
            curr = stack.top();
            stack.pop();
            cout << curr->data << " ";

            curr = curr->right;
        }
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

