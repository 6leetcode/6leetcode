#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
static bool dfs(int **adj, int *adjSize, int node, int target, bool *visited) {
  if (node == target) return true;
  if (visited[node]) return false;
  visited[node] = true;
  for (int i = 0; i < adjSize[node]; i++) {
    if (dfs(adj, adjSize, adj[node][i], target, visited)) return true;
  }
  return false;
}

bool findWhetherExistsPath(int n, int **graph, int graphSize, int *graphColSize, int start, int target) {
  (void)graphColSize;
  int N = n + 1;
  int **adj = (int **)malloc(sizeof(int *) * N);
  int *adjSize = (int *)calloc(N, sizeof(int));
  int *cap = (int *)malloc(sizeof(int) * N);
  for (int i = 0; i < N; i++) {
    cap[i] = 4;
    adj[i] = (int *)malloc(sizeof(int) * 4);
  }
  for (int i = 0; i < graphSize; i++) {
    int u = graph[i][0], v = graph[i][1];
    if (adjSize[u] == cap[u]) {
      cap[u] *= 2;
      adj[u] = (int *)realloc(adj[u], sizeof(int) * cap[u]);
    }
    adj[u][adjSize[u]++] = v;
  }
  bool *visited = (bool *)calloc(N, sizeof(bool));
  bool res = dfs(adj, adjSize, start, target, visited);
  for (int i = 0; i < N; i++) free(adj[i]);
  free(adj);
  free(adjSize);
  free(cap);
  free(visited);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  int data[4][2] = {{0, 1}, {0, 2}, {1, 2}, {1, 2}};
  int **graph = (int **)malloc(sizeof(int *) * 4);
  int *colSize = (int *)malloc(sizeof(int) * 4);
  for (int i = 0; i < 4; i++) {
    graph[i] = (int *)malloc(sizeof(int) * 2);
    colSize[i] = 2;
    graph[i][0] = data[i][0];
    graph[i][1] = data[i][1];
  }
  printf("Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2\n");
  printf("Output: %s\n", findWhetherExistsPath(3, graph, 4, colSize, 0, 2) ? "true" : "false");
  for (int i = 0; i < 4; i++) free(graph[i]);
  free(graph);
  free(colSize);
  return EXIT_SUCCESS;
}
