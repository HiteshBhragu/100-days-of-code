// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;

    cin>>val;
    head = tail = new Node(val);

    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;

	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);

	    Node* result = findIntersection(head1, head2);

	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<int> set;
    Node *h1 = head1, *h2 = head2;
    while(h1 != NULL)
    {
        set.insert(h1->data);
        h1 = h1->next;
    }
    Node *result = NULL, *itersection;
    while(h2 != NULL)
    {
        if(set.find(h2->data) != set.end())
        {
            set.erase(h2->data);
            if(result == NULL)
                itersection = result = h2;
            else{
                result->next = h2;
                result = result->next;
            }
        }
        h2 = h2->next;
    }
    result->next = NULL;
    return itersection;
}
