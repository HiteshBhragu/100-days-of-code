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
    LinkedList(){head = NULL;}

    void insertNode(int data)
    {
        Node* node = new Node(data);
        if(head == NULL)
        {
            head = node;
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

    void reverseLinkedList()
    {
        Node *curr = head, *next = NULL, *prev = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main()
{
    //LinkedList* linkedList = new LinkedList();
    LinkedList l1;

    l1.insertNode(4);
    l1.insertNode(3);
    l1.insertNode(2);
    l1.insertNode(1);


    l1.showLinkedList();
    l1.reverseLinkedList();
    l1.showLinkedList();


    return 0;
}
