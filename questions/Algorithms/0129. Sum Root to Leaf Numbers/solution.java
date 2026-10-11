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
  private long dfs(TreeNode node, long current) {
    if (node == null) {
      return 0;
    }
    current = current * 10 + node.val;
    if (node.left == null && node.right == null) {
      return current;
    }
    return dfs(node.left, current) + dfs(node.right, current);
  }

  public int sumNumbers(TreeNode root) {
    return (int) dfs(root, 0);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode root1 = new TreeNode(1);
    root1.left = new TreeNode(2);
    root1.right = new TreeNode(3);

    TreeNode root2 = new TreeNode(4);
    root2.left = new TreeNode(9);
    root2.right = new TreeNode(0);
    root2.left.left = new TreeNode(5);
    root2.left.right = new TreeNode(1);

    TreeNode root3 = new TreeNode(0);

    TreeNode root4 = new TreeNode(1);
    root4.left = new TreeNode(5);

    Solution solution = new Solution();

    System.out.println("Input:  [1, 2, 3]");
    System.out.println("Output: " + solution.sumNumbers(root1));

    System.out.println("Input:  [4, 9, 0, 5, 1]");
    System.out.println("Output: " + solution.sumNumbers(root2));

    System.out.println("Input:  [0]");
    System.out.println("Output: " + solution.sumNumbers(root3));

    System.out.println("Input:  [1, 5]");
    System.out.println("Output: " + solution.sumNumbers(root4));
  }
}
