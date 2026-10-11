#include <iostream>
#include <vector>

using namespace std;

// ------------------------------- solution begin -------------------------------
class Solution {
  bool dfs(vector<vector<int>> &adj, int node, int target, vector<bool> &visited) {
    if (node == target) return true;
    if (visited[node]) return false;
    visited[node] = true;
    for (int next : adj[node]) {
      if (dfs(adj, next, target, visited)) return true;
    }
    return false;
  }

public:
  bool findWhetherExistsPath(int n, vector<vector<int>> &graph, int start, int target) {
    vector<vector<int>> adj(n + 1);
    for (auto &edge : graph) adj[edge[0]].push_back(edge[1]);
    vector<bool> visited(n + 1, false);
    return dfs(adj, start, target, visited);
  }
};
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  vector<vector<int>> graph = {{0, 1}, {0, 2}, {1, 2}, {1, 2}};
  cout << "Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2" << endl;
  Solution solution;
  cout << "Output: " << (solution.findWhetherExistsPath(3, graph, 0, 2) ? "true" : "false") << endl;
  return EXIT_SUCCESS;
}
