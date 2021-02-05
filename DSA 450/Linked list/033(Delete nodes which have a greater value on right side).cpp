                //curr = prev;

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


Node *compute(Node *head);

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node *compute(Node *head)
{
    // your code goes here
    Node *prev = head, *curr = head->next, *next;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        if(head == prev)
            prev->next = NULL;
        prev = curr;
        curr = next;
    }
    head = prev;

    curr = head;
    int max = head->data;

    while(curr != NULL && curr->next != NULL)
    {
        if(max > curr->next->data)
        {
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
            max = curr->data;
        }
    }

    prev = head, curr = head->next, next;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        if(head == prev)
            prev->next = NULL;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
