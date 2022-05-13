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

bool full(Stack p){ // Returns true if stack is full
    bool full = false;
    if(p.top == MAX_SIZE - 1){
        full = true;
    }
    return full;
}

unsigned char accessTop(Stack p){ // Returns the value at the top
    unsigned char ch = GHOST;
    if(!empty(p)){
        ch = p.items[p.top];
    }
    return ch;
}

Stack push(Stack p, unsigned char ch){ // Put an item on the stack
    if(p.top != p.items[0]){
        p.top++;
        p.items[p.top] = ch;
    }
    return p;
}

Stack pop(Stack p){ // Remove an item from the stack
    if(p.top != SIGNAL){
        p.top--;
    }
    return p;
}

Stack clearStack(Stack p){ // Clear stack (top = 0)
    p.top = SIGNAL;
    return p;
}
