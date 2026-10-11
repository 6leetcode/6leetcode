import java.util.ArrayList;
import java.util.List;

// -------------------------------solution begin-------------------------------
class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode(int x) {
    val = x;
  }
}

class Solution {
  private void dfs(TreeNode node, int remain, List<Integer> path, List<List<Integer>> res) {
    if (node == null) {
      return;
    }
    path.add(node.val);
    remain -= node.val;
    if (node.left == null && node.right == null) {
      if (remain == 0) {
        res.add(new ArrayList<>(path));
      }
    } else {
      dfs(node.left, remain, path, res);
      dfs(node.right, remain, path, res);
    }
    path.remove(path.size() - 1);
  }

  public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
    List<List<Integer>> res = new ArrayList<>();
    dfs(root, targetSum, new ArrayList<>(), res);
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode root1 = new TreeNode(5);
    root1.left = new TreeNode(4);
    root1.right = new TreeNode(8);
    root1.left.left = new TreeNode(11);
    root1.left.left.left = new TreeNode(7);
    root1.left.left.right = new TreeNode(2);
    root1.right.left = new TreeNode(13);
    root1.right.right = new TreeNode(4);
    root1.right.right.left = new TreeNode(5);
    root1.right.right.right = new TreeNode(1);

    TreeNode root2 = new TreeNode(1);
    root2.left = new TreeNode(2);
    root2.right = new TreeNode(3);

    TreeNode root3 = new TreeNode(1);
    root3.left = new TreeNode(2);

    Solution solution = new Solution();

    System.out.println("Input:  [5, 4, 8, 11, null, 13, 4, 7, 2, null, null, 5, 1], targetSum = 22");
    System.out.println("Output: " + solution.pathSum(root1, 22));

    System.out.println("Input:  [1, 2, 3], targetSum = 5");
    System.out.println("Output: " + solution.pathSum(root2, 5));

    System.out.println("Input:  [1, 2], targetSum = 0");
    System.out.println("Output: " + solution.pathSum(root3, 0));

    System.out.println("Input:  [1, 2, 3], targetSum = 3");
    System.out.println("Output: " + solution.pathSum(root2, 3));
  }
}
