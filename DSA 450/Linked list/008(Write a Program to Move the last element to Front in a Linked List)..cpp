#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
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

void moveToFront(Node **head)
{
    Node *last = *head, *secLast;
    while(last->next != NULL)
    {
        secLast = last;
        last = last->next;
    }
    secLast->next = NULL;
    last->next = *head;
    *head = last;
}

int main()
{
    int n, num;
    cin>>n;

    Node *head, *tail;
    cin>> num;
    head = tail = new Node(num);

    for(int i=0 ; i<n-1 ; i++)
    {
        cin>> num;
        tail->next = new Node(num);
        tail = tail->next;
    }

    moveToFront(&head);
    print(head);
	return 0;
}
