#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

Graph initGraph(int nVert) {
  Graph g;
  int i;

  g.nVert = nVert;

  g.matrix = (int **) malloc(sizeof(int) * nVert);
  for(i = 0; i < nVert; i++) {
    g.matrix[i] = (int *) calloc(sizeof(int), nVert);
  }

  return g;
}

void insertEdge(Graph * g, int v1, int v2, int weight) {
  g->matrix[v1][v2] = weight;
}
