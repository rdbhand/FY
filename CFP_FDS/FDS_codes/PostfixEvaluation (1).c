/*Postfix Expression = 6 5 2 3 + 8 * + 3 + * */
/* Postfix Evaluation*/
#include <stdio.h>
int stack[50], top = -1, ans, op1, op2;

void push(int res)
{
	top++;
	stack[top] = res;
}

void pop()
{
	top--;
}
void sum()
{
	op1 = stack[top];
	pop();
	op2 = stack[top];
	pop();
	ans = op2 + op1;
	push(ans);
}

void diff()
{
	op1 = stack[top];
	pop();
	op2 = stack[top];
	pop();
	ans = op2 - op1;
	push(ans);
}

void mult()
{
	op1 = stack[top];
	pop();
	op2 = stack[top];
	pop();
	ans = op2 * op1;
	push(ans);
}

void div()
{
	op1 = stack[top];
	pop();
	op2 = stack[top];
	pop();
	ans = op2 / op1;
	push(ans);
}

void power()
{
	op1 = stack[top];
	pop();
	op2 = stack[top];
	pop();
	for (int i = 0; i < op1; i++)
	{
		ans = ans * op2;
	}
	push(ans);
}

void main()
{
	char st[30];
	int i, res;
	printf("Enter the postfix expression");
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
			div();
			break;
		case '^':
			power();
			break;
		default:
			top++;
			res = st[i] - 48;
			push(res);
		}
	}
	printf("\nThe result is = %d", stack[top]);
}
