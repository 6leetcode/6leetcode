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
  private TreeNode prev = new TreeNode(0);

  private void inorder(TreeNode node) {
    if (node == null) return;
    inorder(node.left);
    node.left = null;
    prev.right = node;
    prev = node;
    inorder(node.right);
  }

  public TreeNode convertBiNode(TreeNode root) {
    TreeNode dummy = new TreeNode(0);
    prev = dummy;
    inorder(root);
    prev.right = null;
    return dummy.right;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode n4 = new TreeNode(4);
    TreeNode n2 = new TreeNode(2);
    TreeNode n5 = new TreeNode(5);
    TreeNode n1 = new TreeNode(1);
    TreeNode n3 = new TreeNode(3);
    TreeNode n6 = new TreeNode(6);
    TreeNode n0 = new TreeNode(0);
    n4.left = n2;
    n4.right = n5;
    n2.left = n1;
    n2.right = n3;
    n5.right = n6;
    n1.left = n0;
    System.out.println("Input:  [4,2,5,1,3,null,6,0]");
    TreeNode head = new Solution().convertBiNode(n4);
    StringBuilder sb = new StringBuilder("Output: [");
    boolean first = true;
    for (TreeNode p = head; p != null; p = p.right) {
      if (!first) sb.append(", ");
      first = false;
      sb.append(p.val).append(", null");
    }
    sb.append("]");
    System.out.println(sb);
  }
}
