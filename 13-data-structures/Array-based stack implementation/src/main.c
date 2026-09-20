#include <stdio.h>
#include "stack.h"

int     main(void) {
    Stack       s;
    DATA_TYPE   value = 'A';
    DATA_TYPE   popValue;

    Init(&s);
/* --------------------------------PUSH------------------------------ */

    for (int i = 0; i < 6; i++) {    
        if (Push(value, &s))
            printf("\n> Stack is Full <\n");
        else
            printf("Added %c successfully\n", value);
        value++;
    }

    printf("\nSize of elements in stack: %d\n", StackSize(&s));
/* --------------------------------PEEK------------------------------- */
    
    printf("\ntop = %c\n\n", Peek(&s));

/* ---------------------------------POP------------------------------- */

    for (int i = 0; i <= 6; i++) { 
        
        if (pop(&popValue, &s))
            printf("\n> Stack is Empty <\n");
        else
            printf("Poped %c successfully\n", popValue);
    }
/* -------------------------------SIZE-------------------------------- */
    printf("\nSize of elements in stack: %d\n", StackSize(&s));
   
    ClearStack(&s);
    return (0);
}
