#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_SIZE 10000
#define DATA_TYPE char

typedef struct {
    DATA_TYPE data[MAX_SIZE];
    int top;
} Stack;

void    Init(Stack *);
bool     IsFull(Stack *);
bool     IsEmpty(Stack *);
int     Push(DATA_TYPE , Stack *);
DATA_TYPE     pop(DATA_TYPE *, Stack *);
DATA_TYPE     Peek(Stack *);
int     StackSize(Stack *);
void    ClearStack(Stack *);

#endif
