#include <stdio.h>

#define MAX_SIZE 100000

typedef struct
{
    char items[MAX_SIZE];
    int top;
} Stack;

void Init(Stack *stack)
{
    stack->items[0] = '\0';
    stack->top = -1;
}

int is_empty(Stack *stack)
{
    return (stack->top == -1);
}

int is_full(Stack *stack)
{
    return (stack->top >= MAX_SIZE);
}

void Push(Stack *stack, char c)
{
    if (!is_full(stack))
    {
        stack->top++;
        stack->items[stack->top] = c;
    }
}

char pop(Stack *stack)
{
    char c = 0;
    if (!is_empty(stack))
    {
        c = stack->items[stack->top--];
        // stack->top--;
    }
    return (c);
}

int open_parenth(char c)
{
    return (c == '{' || c == '[' || c == '(');
}

int close_parenth(char c)
{
    return (c == '}' || c == ']' || c == ')');
}

int main(void)
{
    char *str = "o\\(55{olo4[lf(ghl[p]l+g)ddlf]}op7)))i=p";
    Stack stack;

    Init(&stack);

    while (*str && !close_parenth(*str))
    {
        if (open_parenth(*str))
            Push(&stack, *str);
        str++;
    }
    char c;
    while (*str && !open_parenth(*str))
    {
        if (close_parenth(*str))
        {
            c = pop(&stack);
            if (c == '{')
                c = '}';
            else if (c == '[')
                c = ']';
            else
                c = ')';
            if (c != *str || stack.top == -1)
                break ;
        }
        str++;
    }
    if (stack.top == -1)
        printf("all done");
    else
        printf("NOT done");
    return (0);
}