#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "stack.h"

void topologicalSort(Graph * g, int source) {
  int * visited = (int *) calloc(sizeof(int), g->nVert);

  int * sort = (int *) calloc(sizeof(int), g->nVert);
  int last = g->nVert - 1;

  Stack * s = initStack(g->nVert);
  push(s, source);
  visited[source] = 1;

  while(!isEmpty(s)) {
    int i;
    int finished = 0;
    int v = top(s);
    pop(s);


    for(i = 0; i < g->nVert; i++) {
      if(g->matrix[v][i] > 0) {
        if(visited[i] == 0) {
          finished++;
          push(s, i);
          visited[i] = 1;
        }
      }
    }

    if(finished == 0) {
      sort[last] = v;
      last--;
    }
  }

  int j;

  for(j = 0; j < g->nVert; j++) {
    printf("%d ", sort[j]+1);
  }

  printf("\n");
}

int main() {
  int n, m, i;
  scanf("%d %d", &n, &m);
  Graph * g = initGraph(n);
  for(i = 0; i < m; i++) {
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    insertEdge(g, v1-1, v2-1, 1);
  }

  topologicalSort(g, 0);


  return 0;
}
