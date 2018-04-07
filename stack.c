#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack * initStack(int capacity) {
  Stack * s = (Stack *) malloc(sizeof(Stack));

  s->elements = (int *) malloc(sizeof(int) * capacity);
  s->capacity = capacity;
  s->top = -1;

  return s;
}

void push(Stack * s, int element) {
  (s->top)++;
  (s->elements)[s->top] = element;
}

int pop(Stack * s) {
  (s->top)--;
  return (s->elements)[s->top+1];
}

int top(Stack * s) {
  return (s->elements)[s->top];
}

int isEmpty(Stack * s) {
  return (s->top == -1);
}

void freeStack(Stack * s) {
  free(s->elements);
  free(s);
}
