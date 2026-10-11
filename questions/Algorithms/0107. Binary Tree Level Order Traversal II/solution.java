import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

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
  public List<List<Integer>> levelOrderBottom(TreeNode root) {
    List<List<Integer>> res = new ArrayList<>();
    if (root == null) {
      return res;
    }
    Queue<TreeNode> queue = new LinkedList<>();
    queue.offer(root);
    while (!queue.isEmpty()) {
      int size = queue.size();
      List<Integer> level = new ArrayList<>();
      for (int i = 0; i < size; i++) {
        TreeNode node = queue.poll();
        level.add(node.val);
        if (node.left != null) queue.offer(node.left);
        if (node.right != null) queue.offer(node.right);
      }
      res.add(level);
    }
    Collections.reverse(res);
    return res;
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
    System.out.println("Output: " + solution.levelOrderBottom(t1));

    TreeNode t2 = new TreeNode(1);
    System.out.println("Input:  [1]");
    System.out.println("Output: " + solution.levelOrderBottom(t2));

    System.out.println("Input:  []");
    System.out.println("Output: " + solution.levelOrderBottom(null));
  }
}
