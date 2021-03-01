#include<iostream>
using namespace std;


struct Data
{
    int survivalNo;
};

struct Node
{
    struct Data d;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
    struct Node *tail;
    long size;
};

int initialize(struct LinkedList* list)
{
    int status = -1;
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    status = 0;
    return status;
}

int addToHead(struct LinkedList* list, struct Data dataToInsert)
{
    int status = -1;
    struct Node *newNode = new struct Node;
    if(NULL != newNode)
    {
        status = 0;
        newNode->d = dataToInsert;
        newNode->next = NULL;
        if(0 == list->size)
        {
            list->tail = newNode;
        }
        else
        {
            newNode->next = list->head;
        }
        list->head = newNode;
        list->size++;
    }
    return status;
}

int deleteNode(struct LinkedList *list, struct Node *Del, struct Node *prev)
{
    if(Del == list->head)
    {
        list->head = Del->next;
        prev->next = Del->next;
    }
    else
    {
        prev->next = Del->next;
    }
    if(Del == list->tail)
    {

    }

    delete Del;
    list->size--;
    return 0;
}

int main()
{
    int N, M;
    cin >> N;
    cin >> M;
    struct LinkedList list;
    struct Data d1;
    initialize(&list);
    for(int i = N-1; i >= 0; i--)
    {
        d1.survivalNo = i+1;
        addToHead(&list, d1);
    }
    list.tail->next = list.head;
    struct Node *temp = list.head, *prev = list.head, *t;
//    while(temp != NULL)
//    {
//        cout << "Survival = " << temp->d.survivalNo << endl;
//        temp = temp->next;
//    }
    int siz = N, i, status = -1;
    while(list.size != 1)
    {

        for(i = 0; i < M-1; i++)
        {
            prev = temp;
            temp = temp->next;
        }
       // cout << temp->d.survivalNo << endl;
        status = deleteNode(&list, temp, prev);
//        cout << "prev = " << prev->d.survivalNo << endl;
//        cout << "temp = " << temp->d.survivalNo << endl;
//        t = list.head;
//        for(int i = 0; i < siz-1; i++)
//        {
//            cout << t->d.survivalNo << endl;
//            t = t->next;
//        }
        temp = prev->next;
        //cout << endl;
        siz--;
    }
    cout << endl;
    cout << list.head->d.survivalNo;
    return 0;
}
