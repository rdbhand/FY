#include <stdio.h>

int stack[30], top = -1;
int ans, op1, op2;

void push(int res)
{
    top++;
    stack[top] = res;
}

int pop()
{
    int value = stack[top];
    top--;
    return value;
}

void sum()
{
    op1 = pop();
    op2 = pop();
    ans = op2 + op1;
    push(ans);
}

void diff()
{
    op1 = pop();
    op2 = pop();
    ans = op2 - op1;
    push(ans);
}

void mult()
{
    op1 = pop();
    op2 = pop();
    ans = op2 * op1;
    push(ans);
}

void divide()
{
    op1 = pop();
    op2 = pop();
    ans = op2 / op1;
    push(ans);
}

void power()
{
    op1 = pop();
    op2 = pop();
    ans = 1;
    for (int i = 0; i < op1; i++)
    {
        ans = ans * op2;
    }
    push(ans);
}

int main()
{
    char st[30];
    int i, res;
    printf("Enter the postfix expression : ");
    scanf("%s", st);
    for (i = 0; st[i] != '\0'; i++)
    {
        switch (st[i])
        {
        case '+':
            sum();
            break;
        case '-':
            diff();
            break;
        case '*':
            mult();
            break;
        case '/':
            divide();
            break;
        case '^':
            power();
            break;
        default:
            res = st[i] - '0';
            push(res);
        }
    }
    printf("\nThe result is = %d", stack[top]);
    return 0;
}
