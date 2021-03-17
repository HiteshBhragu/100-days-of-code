#include<iostream>
using namespace std;
void postFix(char*, char*);
int precedence(char);

int main()
{
    char infix[20] = {'\0'}, post[20] = {'\0'};
    cin >> infix;
    postFix(infix, post);
    cout << post;
}

void postFix(char *infix, char *post)
{
    char stack[50] = {'\0'};
    int top = -1, len = 0, count = 0, a, b;
    while(infix[len] != '\0')
    {
        len++;
    }
    top++;
    stack[top] = '(';
    infix[len] = ')';
    len++;
    for(int i = 0; i < len; i++)
    {
        if(65 <= infix[i] && infix[i]  <= 90 || 97 <= infix[i] && infix[i]  <= 122)
        {
            post[count] = infix[i];
            count++;
        }
        else if(infix[i] == ')')
        {
            while(stack[top] != '(')
            {
                post[count] = stack[top];
                count++;
                stack[top] = '\0';
                top--;
            }
            stack[top] = '\0';
            top--;
        }
        else if(42 <= infix[i] && infix[i]  <= 47 || infix[i] == 40 || infix[i] == 36 || infix[i] == 94)
        {
            a = precedence(stack[top]);
            if(a == 0 || infix[i] == 40)
            {
                top++;
                stack[top] = infix[i];
            }
            else
            {
                b = precedence(infix[i]);
                if(a < b)
                {
                    top++;
                    stack[top] = infix[i];
                }
                else
                {
                    post[count] = stack[top];
                    count++;
                    top--;
                    a = precedence(stack[top]);
                    if(a < b)
                    {
                        top++;
                        stack[top] = infix[i];
                    }
                    else
                    {
                        post[count] = stack[top];
                        count++;
                        stack[top] = infix[i];
                    }
                }
            }
            cout << stack << "   ";
            cout << post << endl;
        }
    }
}

int precedence(char a)
{
    if(a == '^')
    {
        return 3;
    }
    if(a == '*' || a == '/' || a == '$')
    {
        return 2;
    }
    else if(a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
