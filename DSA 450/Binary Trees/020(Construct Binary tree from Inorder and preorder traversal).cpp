// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;

	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *buildTree(int inorder[], int preorder[], int n);

void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];

		Node *root = buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
Node * constructTree(int in[], int pre[], int lb, int ub,
unordered_map<int, int> &m, int &index)
{
    if(lb>ub) return NULL;
    Node *node = new Node(pre[index++]);
    if(ub == lb) return node;
    int mid = m[node->data];
    node->left = constructTree(in, pre, lb, mid-1, m, index);
    node->right = constructTree(in, pre, mid+1, ub, m, index);
    return node;
}

Node* buildTree(int in[],int pre[], int n)
{
//add code here.
    int index = 0;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
        m[in[i]] = i;
    return constructTree(in, pre, 0, n-1, m, index);
}
