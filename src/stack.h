/*
 * File : stack.h
 * Author: Guilherme Monteiro de Oliveira
 * Data: 02/05/22
 * Description: Implementation of the stack data structure.
 */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Using instead of typedef enum {FALSE, TRUE} boolean;

#define MAX_SIZE 10
#define SIGNAL 0
#define GHOSTH 36

typedef struct{
    int top;
    unsigned char items[MAX_SIZE];
}Stack;

Stack createStack();
bool empty(Stack);
bool full(Stack);
unsigned char accessTop(Stack);
Stack push(Stack, unsigned char);
Stack pop(Stack);
Stack clearStack(Stack);

#endif //STACK_H_INCLUDED
