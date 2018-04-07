#ifndef _GRAPH_H
#define _GRAPH_H

typedef struct tGraph {
  int ** matrix;
  int nVert;
  int nEdge;
} Graph;

Graph initGraph(int nVert);
void insertEdge(Graph * g, int v1, int v2, int weight);

#endif
