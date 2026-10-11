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
  private void weave(List<Integer> l, int li, List<Integer> r, int ri, List<Integer> prefix,
      List<List<Integer>> res) {
    if (li == l.size() && ri == r.size()) {
      res.add(new ArrayList<>(prefix));
      return;
    }
    if (li < l.size()) {
      prefix.add(l.get(li));
      weave(l, li + 1, r, ri, prefix, res);
      prefix.remove(prefix.size() - 1);
    }
    if (ri < r.size()) {
      prefix.add(r.get(ri));
      weave(l, li, r, ri + 1, prefix, res);
      prefix.remove(prefix.size() - 1);
    }
  }

  public List<List<Integer>> BSTSequences(TreeNode root) {
    if (root == null) {
      List<List<Integer>> empty = new ArrayList<>();
      empty.add(new ArrayList<>());
      return empty;
    }
    List<List<Integer>> left = BSTSequences(root.left);
    List<List<Integer>> right = BSTSequences(root.right);
    List<List<Integer>> res = new ArrayList<>();
    for (List<Integer> l : left) {
      for (List<Integer> r : right) {
        List<Integer> prefix = new ArrayList<>();
        prefix.add(root.val);
        weave(l, 0, r, 0, prefix, res);
      }
    }
    return res;
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    TreeNode root = new TreeNode(2);
    root.left = new TreeNode(1);
    root.right = new TreeNode(3);
    System.out.println("Input:  [2, 1, 3]");
    System.out.println("Output: " + new Solution().BSTSequences(root));
  }
}
