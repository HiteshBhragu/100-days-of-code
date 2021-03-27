#include<iostream>
using namespace std;

struct data
{
    int no;
};

struct Node
{
    struct data d;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
    int siz;
};

int insertNode(struct LinkedList *list, struct data dataToAdd);
void selectionSort(struct LinkedList *list);

void initialize(struct LinkedList* list)
{
    list->siz = 0;
    list->head = NULL;
}

int main()
{
    struct data d1;
    struct LinkedList list;

    initialize(&list);
    int siz;
    cout << "Enter the size = ";
    cin >> siz;
    for(int i = 0; i < siz; i++)
    {
        cout << "Enter the number = ";
        cin >> d1.no;
        insertNode(&list, d1);
    }

    struct Node *temp = list.head;
    selectionSort(&list);
    temp = list.head;
    while(temp != NULL)
    {
        cout << temp->d.no << endl;
        temp = temp->next;
    }
    return 0;
}

void selectionSort(struct LinkedList *list)
{
    cout << "start" << endl;
    struct Node *temp = list->head, *tmp, *minNode, *prev = list->head, *curr, *next = NULL, *prv, *tempnext, *v;
    int mini, count = 0, temp1;
    while(temp != NULL)
    {
        count = 0;
        v = temp;
        tmp = temp;
        tempnext = temp->next;
        mini = tmp->d.no;
        while(tmp->next != NULL)
        {
            if(tmp->next->d.no < mini)
            {
                prv = tmp;
                curr = tmp->next;
                next = tmp->next->next;
                minNode = tmp->next;
                mini = tmp->next->d.no;
                count++;
            }
            tmp = tmp->next;
        }
        if(count != 0)
        {
            if(temp == list->head)
            {
                if(list->siz == 2)
                {
                    prev->next = next;
                    curr->next = prev;
                }
                else if(prv == temp)
                {
                    if(prev == prv)
                    {
                        prev->next = next;
                        curr->next = prev;
                    }
                    else
                    {
                        prev->next = curr;
                        prv->next = next;
                        curr->next = temp;
                    }
                }
                else
                {
                    prev->next = next;
                    curr->next = tempnext;
                    prv->next = prev;
                }
                list->head = curr;
            }
            else
            {
                if(prv == temp)
                {
                    if(prev == prv)
                    {
                        prev->next = next;
                        curr->next = prev;
                    }
                    else
                    {
                        prev->next = curr;
                        prv->next = next;
                        curr->next = temp;
                    }
                }
                else if(curr->next == NULL)
                {
                    curr->next = temp->next;
                    prv->next = temp;
                    prev->next = curr;
                    temp->next = next;
                }
                else
                {
                    prv->next = temp;
                    prev->next = curr;
                    curr->next = temp->next;
                    temp->next = next;
                }
            }
            temp = curr;
        }
        prev = temp;
        temp = temp->next;
    }
}

int insertNode(struct LinkedList *list, struct data dataToAdd)
{
    struct Node *newNode = new struct Node;
    int status = -1;
    if(newNode != NULL)
    {
        newNode->next = NULL;
        newNode->d = dataToAdd;

        if(list->head != NULL)
        {
            newNode->next = list->head;
        }
        list->head = newNode;
        list->siz++;
        status = 0;
    }
    return status;
}
