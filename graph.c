#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

Graph * initGraph(int nVert) {
  Graph * g = (Graph *) malloc(sizeof(Graph));
  int i, j;

  g->nVert = nVert;

  g->matrix = (int **) malloc(sizeof(int*) * nVert);
  for(i = 0; i < nVert; i++) {
    (g->matrix)[i] = (int *) malloc(sizeof(int) * nVert);
    for(j = 0; j < nVert; j++) {
      g->matrix[i][j] = 0;
    }
  }

  return g;
}

void insertEdge(Graph * g, int v1, int v2, int weight) {
  (g->matrix)[v1][v2] = weight;
}
