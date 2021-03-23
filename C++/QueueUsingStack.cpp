#include<iostream>
using namespace std;

//Declaration of float queue

#define MAX_STACK_SIZE 50
struct IntegerStack
{
    //TODO::Write your code here

    int data[MAX_STACK_SIZE];
    int top;
};

//Declaration of all the operations on a stack of integers
//All the below stack functions shall return 0 on success
//All the below stack functions shall return -1 on failure

int initialize(struct IntegerStack* stack);

int push(struct IntegerStack* stack, int itemToPush);

int pop(struct IntegerStack* stack, int* pPoppedItem);

int isEmpty(struct IntegerStack* stack);

int isFull(struct IntegerStack* stack);


int main()
{
    struct IntegerStack s1;

    initialize(&s1);

    int status, PoppedItem, choice, k = 1, element;
    while(k)
    {
        cout << "1. Push.";
        cout << "\n2. Pop.";
        cout << "\n3. Exit.";
        cout << "\nEnter your choice = ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout<< "Enter the number = ";
                cin >> element;
                status = push(&s1, element);
                if(0 == status)
                {
                    cout << "\nEnqueue successfully = " << element << "\n\n";
                }

                else if(-1 == status)
                {
                    //The stack is full
                    cout << "\nFailed to push because stack is already full.\n\n";
                }
                break;

            case 2:

                PoppedItem = pop(&s1, &PoppedItem);
                if(PoppedItem == -1)
                {
                    // -1 return value represents stack is empty.
                    cout << "\nStack is empty\n\n";
                }

                else
                {
                    //On successful pop function return popped item.
                    cout << "\nPopped item = " << PoppedItem;
                    cout << "\nStack's top = " << s1.top << "\n\n";
                }
                break;

            case 3:
                k = 0;
                break;

            default :
                cout << "\nInvalid choice.\n" << endl;
        }
    }


}

//This function shall return the number of items in the stack.
//Obviously it will return 0 if there are no items in the stack.
int size(struct IntegerStack* stack);


//Definition of all the operations on a stack of int
//All queue functions shall return 0 on success
//All queue functions shall return -1 on failure


int initialize(struct IntegerStack* stack)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    stack->top = -1;
    status = 0;

    //Do not write below this line
    return status;
}

int push(struct IntegerStack* stack, int itemToPush)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    status = isFull(stack);

    if(status == -1)
    {
        stack->top++;
        stack->data[stack->top] = itemToPush;
        status = 0;
    }
    else
    {
        status = -1;
    }

    //Do not write below this line
    return status;
}

int pop(struct IntegerStack* stack, int* pPoppedItem)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    status = isEmpty(stack);

    if(status == -1)
    {
        cout << stack->top - stack->top;
        *pPoppedItem = stack->data[stack->top - stack->top];
        stack->top--;
        status = 0;
    }
    else
    {
        status = -1;
    }

    //Do not write below this line
    return status;
}


int isEmpty(struct IntegerStack* stack)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    if(stack->top == -1)
    {
        status = 0;
    }

    //Do not write below this line
    return status;
}


int isFull(struct IntegerStack* stack)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    if(stack->top == MAX_STACK_SIZE-1)
    {
        status = 0;
    }

    //Do not write below this line
    return status;
}


//This function shall return the number of items in the stack.
//Obviously it will return 0 if there are no items in the stack.
int size(struct IntegerStack* stack)
{
    int count = -1;
    //Do not write above this line

    //TODO::Write your code here

    count = stack->top+1;

    //Do not write below this line
    return count;
}
