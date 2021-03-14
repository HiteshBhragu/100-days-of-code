#include "LinkedListOfStudents.h"
#include<stdio.h>
#include<string.h>

//Definition of all the operations on a Linked List of Students
//All the below LinkedList functions shall return 0 on success
//All the below LinkedList functions shall return -1 on failure


int initialize(struct LinkedListStudents* list)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    status = 0;
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    //Do not write below this line
    return status;
}


//Adds a new student at the head of the list
int addToHead(struct LinkedListStudents* list, struct Student studentToAdd)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    status = 0;
    struct StudentNode* newNode = new struct StudentNode;
    if(NULL == newNode)
    {
        status = -1;
        return status;
    }
    newNode->data = studentToAdd;
    newNode->next = NULL;

    newNode->next = list->head;
    list->head = newNode;

    if(NULL == list->tail)
    {
        list->tail = newNode;
    }
    list->size++;

    //Do not write below this line
    return status;
}


//gets the student at the head of the list without removing it from the list
int seeHead(struct LinkedListStudents* list, struct Student* studentAtHead)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    if(list->size > 0)
    {
        status = 0;
        *studentAtHead = list->head->data;
    }

    //Do not write below this line
    return status;
}


//gets the student at the head of the list and removs it from the list
int removeFromHead(struct LinkedListStudents* list, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    if(list->size > 0)
    {
        status = 0;
        *studentRemoved = list->head->data;
        struct StudentNode* tempToRemove = list->head;
        list->head = list->head->next;
        delete tempToRemove;
        list->size--;
    }


    //Do not write below this line
    return status;
}


//Adds a new student at the tail of the list
int addToTail(struct LinkedListStudents* list, struct Student studentToAdd)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    struct StudentNode* newNode = new struct StudentNode;
    if(NULL == newNode)
    {
        return status;
    }

    status = 0;

    newNode->data = studentToAdd;
    newNode->next = NULL;

    if(NULL == list->head && NULL == list->tail)
    {
        list->head = list->tail = newNode;
    }
    else
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }

    list->size++;
    //Do not write below this line
    return status;
}


//gets the student at the tail of the list without removing it from the list
int seeTail(struct LinkedListStudents* list, struct Student* studentAtTail)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    if(list->size > 0)
    {
        status = 0;
        *studentAtTail = list->tail->data;
    }

    //Do not write below this line
    return status;
}


//Modifies a student at a specific position in the list
//Consider the first node of the list is at position 1
int addAtPosition(struct LinkedListStudents* list, int addAtThisPosition, struct Student studentToAdd)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    if(addAtThisPosition <= 0)
    {
        return status;
    }
    struct StudentNode *temp;
    temp = list->head;

    if(addAtThisPosition == 1)
    {
        status = addToHead(list, studentToAdd);
        return status;
    }
    else if(addAtThisPosition == list->size+1)
    {
        status = addToTail(list, studentToAdd);
        return status;
    }
    else
    {
        if(addAtThisPosition <= list->size)
        {
            int count = 0;
            struct StudentNode *newNode, *prev;
            newNode = new struct StudentNode;
            newNode->next = NULL;
            newNode->data = studentToAdd;
            temp = list->head;
            list->size++;

            if(newNode != NULL)
            {
                while(temp != NULL)
                {
                    count++;
                    if(count == addAtThisPosition)
                    {
                        status = 0;
                        break;
                    }
                    prev = temp;
                    temp = temp->next;
                }
                if(0 == status)
                {
                    prev->next = newNode;
                    newNode->next = temp;
                }
            }
        }
    }

    //Do not write below this line
    return status;
}

//Gets and removes a student from a specific position in the list
int removeFromPosition(struct LinkedListStudents* list, int removeFromThisPosition, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    if(removeFromThisPosition <= 0)
    {
        return status;
    }
    else
    {
        if(-1 == isEmpty(list) && removeFromThisPosition <= list->size)
        {
            if(removeFromThisPosition == 1)
            {
                status = removeFromHead(list, studentRemoved);
            }
            else
            {

                int count = 0;
                struct StudentNode *temp = list->head, *prev, *toBeDel;

                while(temp != NULL)
                {
                    count++;
                    if(count == removeFromThisPosition)
                    {
                        toBeDel = temp;
                        status = 0;
                        break;
                    }
                    prev = temp;
                    temp = temp->next;
                }
                if(0 == status)
                {
                    list->size--;
                    if(toBeDel == list->tail)
                    {
                        list->tail = prev;
                        list->tail->next =NULL;
                    }
                    else
                    {
                        prev->next = toBeDel->next;
                    }
                    *studentRemoved = toBeDel->data;
                    delete toBeDel;

                    if(toBeDel == list->head && toBeDel == list->tail)
                    {
                        initialize(list);
                    }
                }
            }
        }
    }

    //Do not write below this line
    return status;
}


//Gets without removing a student from a specific position in the list
int seePosition(struct LinkedListStudents* list, int studentAtThisPosition, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    struct StudentNode *temp;
    int count = 0;
    temp = list->head;

    if(-1 == isEmpty(list) && studentAtThisPosition <= list->size)
    {
        if(1 == studentAtThisPosition)
        {
            status = seeHead(list, studentRemoved);
        }
        else if(studentAtThisPosition == list->size)
        {
            status = seeTail(list, studentRemoved);
        }
        else
        {
            while(temp != 0)
            {
                count++;
                if(count == studentAtThisPosition)
                {
                    status = 0;
                    *studentRemoved = temp->data;
                    break;
                }
                temp = temp->next;
            }
        }
    }

    //Do not write below this line
    return status;
}

//Gets without removing a student with a specific rollNo in the list
//Remember roll no is unique in the list
int searchByRollNo(struct LinkedListStudents* list, int rollNo, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    struct StudentNode *temp = list->head;

    while(temp != NULL)
    {
        if(temp->data.rollNo == rollNo)
        {
            status = 0;
            *studentRemoved = temp->data;
            break;
        }
        temp = temp->next;
    }

    //Do not write below this line
    return status;
}

//Gets without removing a student with a specific name in the list
//Remember name is not unique in the list hence return the first matching name
int searchByName(struct LinkedListStudents* list, char* studentName, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    struct StudentNode *temp = list->head;

    while(temp != NULL)
    {
        if(0 == strcmp(temp->data.name, studentName))
        {
            status = 0;
            *studentRemoved = temp->data;
            break;
        }
        temp = temp->next;
    }
    //TODO::Write your code here

    //Do not write below this line
    return status;
}



//Modifies a student at a specific position in the list
int modifyAtPosition(struct LinkedListStudents* list, int ModifyAtThisPosition, struct Student modifiedStudent)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    struct StudentNode *temp = list->head;
    int count = 0;

    if(-1 == isEmpty(list) && ModifyAtThisPosition <= list->size)
    {
        while(temp != 0)
        {
            count++;
            if(count == ModifyAtThisPosition)
            {
                status = 0;
                temp->data = modifiedStudent;
                break;
            }
            temp = temp->next;
        }
    }

    //Do not write below this line
    return status;
}


//Gets and removes a student with a specific rollNo in the list
//Remember roll no is unique in the list
int removeByRollNo(struct LinkedListStudents* list, int rollNo, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    struct StudentNode *temp = list->head, *prev, *toBeDel;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        if(temp->data.rollNo == rollNo)
        {
            toBeDel = temp;
            status = 0;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if(0 == status)
    {
        *studentRemoved = toBeDel->data;
        if(toBeDel == list->head)
        {
            removeFromHead(list, studentRemoved);
            return status;
        }
        else if(toBeDel == list->tail)
        {
            list->tail = prev;
            prev->next = NULL;
        }
        else
        {
            prev->next = toBeDel->next;
        }
        list->size--;
        delete toBeDel;

        if(toBeDel == list->head && toBeDel == list->tail)
        {
            initialize(list);
        }
    }

    //Do not write below this line
    return status;
}

//Gets and removes a student with a specific name in the list
//Remember name is not uniue in the list
int removeByName(struct LinkedListStudents* list, char* studentName, struct Student* studentRemoved)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here


    struct StudentNode *temp = list->head, *prev, *toBeDel;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        if(0 == strcmp(temp->data.name, studentName))
        {
            toBeDel = temp;
            status = 0;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if(0 == status)
    {
        *studentRemoved = toBeDel->data;
        if(toBeDel == list->head)
        {
            removeFromHead(list, studentRemoved);
            return status;
        }
        else if(toBeDel == list->tail)
        {
            list->tail = prev;
            prev->next = NULL;
        }
        else
        {
            prev->next = toBeDel->next;
        }
        list->size--;
        delete toBeDel;

        if(toBeDel == list->head && toBeDel == list->tail)
        {
            initialize(list);
        }
    }

    //Do not write below this line
    return status;
}



int isEmpty(struct LinkedListStudents* list)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here
    if(0 == list->size)
    {
        status = 0;
    }

    //Do not write below this line
    return status;
}


//This function shall return the number of items in the list.
//Obviously it will return 0 if there are no items in the list.
long size(struct LinkedListStudents* list)
{
    long count = -1;
    //Do not write above this line

    //TODO::Write your code here
     count = list->size;

    //Do not write below this line
    return count;
}

