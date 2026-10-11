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
  public int minDepth(TreeNode root) {
    if (root == null) {
      return 0;
    }
    if (root.left == null && root.right == null) {
      return 1;
    }
    if (root.left == null) {
      return minDepth(root.right) + 1;
    }
    if (root.right == null) {
      return minDepth(root.left) + 1;
    }
    return 1 + Math.min(minDepth(root.left), minDepth(root.right));
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
    System.out.println("Output: " + solution.minDepth(t1));

    TreeNode t2 = new TreeNode(2);
    t2.right = new TreeNode(3);
    t2.right.right = new TreeNode(4);
    t2.right.right.right = new TreeNode(5);
    t2.right.right.right.right = new TreeNode(6);
    System.out.println("Input:  [2, null, 3, null, 4, null, 5, null, 6]");
    System.out.println("Output: " + solution.minDepth(t2));
  }
}
