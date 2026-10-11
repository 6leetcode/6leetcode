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
  private int count(TreeNode node, long target) {
    if (node == null) return 0;
    int res = node.val == target ? 1 : 0;
    res += count(node.left, target - node.val);
    res += count(node.right, target - node.val);
    return res;
  }

  public int pathSum(TreeNode root, int sum) {
    if (root == null) return 0;
    return count(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    int sum = 3;
    System.out.println("Input:  [1, 2, 3], sum = " + sum);
    System.out.println("Output: " + new Solution().pathSum(root, sum));
  }
}
