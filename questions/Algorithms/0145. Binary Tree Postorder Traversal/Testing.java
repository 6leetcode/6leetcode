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
  private void dfs(TreeNode node, List<Integer> out) {
    if (node == null) {
      return;
    }
    dfs(node.left, out);
    dfs(node.right, out);
    out.add(node.val);
  }

  public List<Integer> postorderTraversal(TreeNode root) {
    List<Integer> out = new ArrayList<>();
    dfs(root, out);
    return out;
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode root1 = new TreeNode(1);
    root1.right = new TreeNode(2);
    root1.right.left = new TreeNode(3);

    TreeNode root2 = new TreeNode(1);

    TreeNode root3 = new TreeNode(1);
    root3.left = new TreeNode(2);
    root3.right = new TreeNode(3);
    root3.left.left = new TreeNode(4);
    root3.left.right = new TreeNode(5);

    Solution solution = new Solution();

    System.out.println("Input:  [1, null, 2, 3]");
    System.out.println("Output: " + solution.postorderTraversal(root1));

    System.out.println("Input:  []");
    System.out.println("Output: " + solution.postorderTraversal(null));

    System.out.println("Input:  [1]");
    System.out.println("Output: " + solution.postorderTraversal(root2));

    System.out.println("Input:  [1, 2, 3, 4, 5]");
    System.out.println("Output: " + solution.postorderTraversal(root3));
  }
}
