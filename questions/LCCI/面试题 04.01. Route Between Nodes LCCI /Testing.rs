pub struct Solution {}

// ------------------------------- solution begin -------------------------------
impl Solution {
  pub fn find_whether_exists_path(n: i32, graph: Vec<Vec<i32>>, start: i32, target: i32) -> bool {
    let n = n as usize;
    let mut adj: Vec<Vec<i32>> = vec![vec![]; n + 1];
    for e in &graph {
      adj[e[0] as usize].push(e[1]);
    }
    let mut visited = vec![false; n + 1];
    fn dfs(adj: &Vec<Vec<i32>>, node: i32, target: i32, visited: &mut Vec<bool>) -> bool {
      if node == target {
        return true;
      }
      if visited[node as usize] {
        return false;
      }
      visited[node as usize] = true;
      for &next in &adj[node as usize] {
        if dfs(adj, next, target, visited) {
          return true;
        }
      }
      false
    }
    dfs(&adj, start, target, &mut visited)
  }
}
// ------------------------------- solution end ---------------------------------

fn main() {
  let graph = vec![vec![0, 1], vec![0, 2], vec![1, 2], vec![1, 2]];
  println!("Input:  n = 3, graph = [[0,1],[0,2],[1,2],[1,2]], start = 0, target = 2");
  println!("Output: {}", Solution::find_whether_exists_path(3, graph, 0, 2));
}
