#include<iostream>
using namespace std;
void infixToPostfix(char *, char *);

int main()
{
    char post[50] = {'\0'}, infix[50] = {'\0'};
    cin >> post;
    infixToPostfix(post, infix);
}

void infixToPostfix(char *post, char *infix)
{
    int len = 0, top = -1, count = 0;
    while(post[len] != '\0')
        len++;
    char stack[50] = {'\0'}, temp;
    for(int i = 0; i < len; i++)
    {
        if(65 <= post[i] && post[i]  <= 90 || 97 <= post[i] && post[i]  <= 122)
        {
            top++;
            stack[top] = post[i];
        }
        else if(42 <= post[i] && post[i]  <= 47 || post[i] == 36 || post[i] == 94)
        {
            temp = stack[top];
            top--;
            infix[count] = stack[top];
            count++;
            infix[count] = post[i];
            count++;
            infix[count] = temp;
            stack[top] = infix[count];
            cout << "infix   =  " << infix[count] << endl;
            count++;
        }
        cout << stack << "   ";
        cout << infix << endl;
    }
}
