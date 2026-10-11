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

  TreeNode(int x, TreeNode left, TreeNode right) {
    val = x;
    this.left = left;
    this.right = right;
  }
}

class Solution {
  private List<TreeNode> gen(int start, int end) {
    List<TreeNode> res = new ArrayList<>();
    if (start > end) {
      res.add(null);
      return res;
    }
    for (int i = start; i <= end; i++) {
      List<TreeNode> lefts = gen(start, i - 1);
      List<TreeNode> rights = gen(i + 1, end);
      for (TreeNode l : lefts) {
        for (TreeNode r : rights) {
          res.add(new TreeNode(i, l, r));
        }
      }
    }
    return res;
  }

  public List<TreeNode> generateTrees(int n) {
    if (n == 0) return new ArrayList<>();
    return gen(1, n);
  }
}
// -------------------------------solution end---------------------------------

class Main {
  public static void main(String[] args) {
    int input = 3;
    System.out.println("Input:  " + input);
    Solution solution = new Solution();
    System.out.println("Output: " + solution.generateTrees(input).size());
  }
}
