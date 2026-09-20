#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

void    Init(Stack *ptr_s) {    
    
    ptr_s->top = -1;
}

bool     IsFull(Stack *ptr_s) {
    
    /* top start from 0, size start from 1 */
    return (ptr_s->top >= MAX_SIZE - 1);
}

bool     IsEmpty(Stack *ptr_s) {
    
    return (ptr_s->top == -1);
}

int     Push(DATA_TYPE value, Stack *ptr_s) {

    if (IsFull(ptr_s)) {
        return (1);
    } else {
        /* If we don't increment top initially, we will overwrite the previous data */
        ptr_s->top++;
        ptr_s->data[ptr_s->top] = value;
    }
    return (0);
}

DATA_TYPE     pop(DATA_TYPE *ptr_element, Stack *ptr_s) {

    if (IsEmpty(ptr_s))
        return (1);
    *ptr_element = ptr_s->data[ptr_s->top];
    ptr_s->top--;
    return (0);
}

DATA_TYPE     Peek(Stack *ptr_s) {

    if (IsEmpty(ptr_s))
        return (0);
    return (ptr_s->data[ptr_s->top]);
}

int     StackSize(Stack *ptr_s) {
    
    if (IsEmpty(ptr_s))
        return (0);
    return (ptr_s->top + 1);
}

void    ClearStack(Stack *ptr_s) {

    ptr_s->top = -1;
}
