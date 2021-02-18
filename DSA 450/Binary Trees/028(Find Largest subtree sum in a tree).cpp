// C++ program to find largest subtree
// sum in a given binary tree.
#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node.
struct Node {
	int key;
	Node *left, *right;
};

// Function to create new tree node.
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}

// Function to find largest subtree sum.
int findLargestSubtreeSum(Node* node, int &ans)
{
	if(!node) return 0;
	int l = findLargestSubtreeSum(node->left, ans);
	int r = findLargestSubtreeSum(node->right, ans);

	if(ans == 0 || ans < l+r+node->key)
        ans  = l+r+node->key;
	return l+r+node->key;
}

// Driver function
int main()
{
	/*
			1
			/ \
			/	 \
		-2	 3
		/ \	 / \
		/ \ / \
		4	 5 -6	 2
	*/

	Node* root = newNode(1);
	root->left = newNode(-2);
	root->right = newNode(3);
	root->left->left = newNode(5);
	root->left->right = newNode(5);
	root->right->left = newNode(-6);
	root->right->right = newNode(2);
    int ans = 0;
    findLargestSubtreeSum(root, ans);
	cout << ans;
	return 0;
}
