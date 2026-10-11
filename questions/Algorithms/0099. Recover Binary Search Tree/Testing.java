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
  private void collect(TreeNode node, List<Integer> vals) {
    if (node == null) return;
    collect(node.left, vals);
    vals.add(node.val);
    collect(node.right, vals);
  }

  private void assign(TreeNode node, List<Integer> vals, int[] idx) {
    if (node == null) return;
    assign(node.left, vals, idx);
    node.val = vals.get(idx[0]++);
    assign(node.right, vals, idx);
  }

  public void recoverTree(TreeNode root) {
    List<Integer> vals = new ArrayList<>();
    collect(root, vals);
    int n = vals.size();
    int i = 0;
    while (i < n - 1 && vals.get(i) < vals.get(i + 1)) i++;
    int j = n - 1;
    while (j > 0 && vals.get(j - 1) < vals.get(j)) j--;
    int t = vals.get(i);
    vals.set(i, vals.get(j));
    vals.set(j, t);
    assign(root, vals, new int[] { 0 });
  }
}
// -------------------------------solution end---------------------------------

class Testing {
  public static void main(String[] args) {
    TreeNode root = new TreeNode(1);
    root.right = new TreeNode(3);
    root.right.right = new TreeNode(2);
    System.out.println("Input:  [1, 3, null, null, 2]");
    new Solution().recoverTree(root);
    List<Integer> vals = new ArrayList<>();
    inorder(root, vals);
    System.out.println("Output: " + vals);
  }

  static void inorder(TreeNode node, List<Integer> vals) {
    if (node == null) return;
    inorder(node.left, vals);
    vals.add(node.val);
    inorder(node.right, vals);
  }
}
