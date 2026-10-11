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
  private int height(TreeNode node) {
    if (node == null) {
      return 0;
    }
    int left = height(node.left);
    if (left == -1) {
      return -1;
    }
    int right = height(node.right);
    if (right == -1) {
      return -1;
    }
    if (left - right > 1 || right - left > 1) {
      return -1;
    }
    return Math.max(left, right) + 1;
  }

  public boolean isBalanced(TreeNode root) {
    return height(root) != -1;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    Solution solution = new Solution();

    TreeNode t1 = new TreeNode(3);
    t1.left = new TreeNode(9);
    t1.right = new TreeNode(20);
    t1.right.left = new TreeNode(15);
    t1.right.right = new TreeNode(7);
    System.out.println("Input:  [3, 9, 20, null, null, 15, 7]");
    System.out.println("Output: " + solution.isBalanced(t1));

    TreeNode t2 = new TreeNode(1);
    t2.left = new TreeNode(2);
    t2.right = new TreeNode(2);
    t2.left.left = new TreeNode(3);
    t2.left.right = new TreeNode(3);
    t2.left.left.left = new TreeNode(4);
    t2.left.left.right = new TreeNode(4);
    System.out.println("Input:  [1, 2, 2, 3, 3, null, null, 4, 4]");
    System.out.println("Output: " + solution.isBalanced(t2));

    System.out.println("Input:  []");
    System.out.println("Output: " + solution.isBalanced(null));
  }
}
