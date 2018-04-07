#ifndef _STACK_H
#define _STACK_H

typedef struct tStack {
  int * elements;
  int capacity;
  int top;
} Stack;

Stack * initStack(int capacity);
void push(Stack * s, int element);
int pop(Stack * s);
int top(Stack * s);
int isEmpty(Stack * s);
void freeStack(Stack * s);

#endif
