#include "StackOfDoubles.h"
#include<iostream>

//Definition of all the operations on a stack of int
//All queue functions shall return 0 on success
//All queue functions shall return -1 on failure


int initialize(struct DoubleStack* stack)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here

    stack->top = -1;
    stack->arraySize = 10;
    status = 0;

    //Do not write below this line
    return status;
}

int push(struct DoubleStack* stack, double itemToPush)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    if(-1 == stack->top)
    {
        //stack->arraySize = 10000000000;
        //stack->arraySize = 10;
        stack->data = new long[stack->arraySize];

        if(stack->data == NULL)
        {
            return status;
        }
    }
    else if(stack->top + 1 == stack->arraySize)
    {
        long *temp = stack->data;
        //stack->arraySize += 100000000000;
        //stack->arraySize += 10;
        stack->data = new long[stack->arraySize*2];
        if(stack->data == NULL)
        {
            return status;
        }

        int i;
        for(i=0; i<=stack->top; i++)
        {
            stack->data[i] = temp[i];
        }

        delete[] temp;
    }
    if(-1 == isFull(stack))
    {
        stack->top++;
        stack->data[stack->top] = itemToPush;
        status = 0;
    }

    //Do not write below this line
    return status;
}

int pop(struct DoubleStack* stack, double* pPoppedItem)
{
    int status = -1;
    //Do not write above this line

    //TODO::Write your code here


    if(-1 == isEmpty(stack))
    {

        *pPoppedItem = stack->data[stack->top];
        stack->top--;
        if((20 == stack->arraySize - (stack->top+1)))
        {
            long *temp;
            int i;
            temp = stack->data;
            if(0 == stack->top)
            {
                stack->arraySize = stack->arraySize - 10;
            }
            else
            {
                stack->arraySize = stack->arraySize - 10;
            }

            stack->data = new long[stack->arraySize];
            for(i=0; i<=stack->top; i++)
            {
                stack->data[i] = temp[i];
            }
            //cout<<"Array Size = "<<stack->arraySize;
            delete[] temp;
        }

        status = 0;
    }

    //Do not write below this line
    return status;
}


int isEmpty(struct DoubleStack* stack)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    if(-1 == stack->top)
    {
        status = 0;
    }

    //Do not write below this line
    return status;
}


int isFull(struct DoubleStack* stack)
{
    int status = -1;
    //Do not write above this line


    //TODO::Write your code here

    if(stack->top == stack->arraySize-1)
    {
        status = 0;
    }

    //Do not write below this line
    return status;
}


//This function shall return the number of items in the stack.
//Obviously it will return 0 if there are no items in the stack.
long size(struct DoubleStack* stack)
{
    int count = -1;
    //Do not write above this line

    //TODO::Write your code here

    count = stack->top + 1;

    //Do not write below this line
    return count;
}
