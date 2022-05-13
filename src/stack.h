/*
 * File : stack.h
 * Author: Guilherme Monteiro de Oliveira
 * Data: 02/05/22
 * Description: Implementation of the stack data structure.
 */

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX_SIZE 10
#define SIGNAL 0
#define GHOSTH 36

typedef struct{
    int top;
    unsigned char items[MAX_SIZE];
}Stack;

#endif //STACK_H_INCLUDED
