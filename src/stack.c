/*
 * File : stack.c
 * Author: Guilherme Monteiro de Oliveira
 * Data: 02/05/22
 * Description: Implementation of the stack data structure.
 */

#include "stack.h"

Stack createStack(){ // Create empty stack
    Stack p;
    p.top = SIGNAL;
    p.items[0] = MAX_SIZE - 1;
    return p;
}

bool empty(Stack p){ // Returns true if stack is empty
    bool empty = false;
    if(p.top == SIGNAL){
        empty = true;
    }
    return empty;
}
