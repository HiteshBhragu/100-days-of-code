#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node* head;
    Node* tail;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertNode(int data)
    {
        Node* node = new Node(data);
        if(head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            Node *temp = head;
            head = node;
            node->next = temp;
        }
    }

    void showLinkedList()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverseLinkedList(Node *node, int k)
    {
        Node *curr = head, *next = NULL, *prev = NULL, *t = head;
        while(k != 0)
        {
            k--;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = next;
        head = prev;
        return ;
    }
};

int main()
{
    //LinkedList* linkedList = new LinkedList();
    LinkedList l1;

    l1.insertNode(5);
    l1.insertNode(4);
    l1.insertNode(3);
    l1.insertNode(2);
    l1.insertNode(1);


    l1.showLinkedList();
    l1.reverseLinkedList(l1.head,5);
    l1.showLinkedList();
    return 0;
}

