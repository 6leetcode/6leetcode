#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void weave(int *l, int ln, int *r, int rn, int *prefix, int pn, int **res, int *size, int **cols) {
  if (ln == 0 && rn == 0) {
    res[*size] = (int *)malloc(sizeof(int) * pn);
    for (int i = 0; i < pn; i++) res[*size][i] = prefix[i];
    (*cols)[*size] = pn;
    (*size)++;
    return;
  }
  if (ln > 0) {
    prefix[pn] = l[0];
    weave(l + 1, ln - 1, r, rn, prefix, pn + 1, res, size, cols);
  }
  if (rn > 0) {
    prefix[pn] = r[0];
    weave(l, ln, r + 1, rn - 1, prefix, pn + 1, res, size, cols);
  }
}

static void collect(struct TreeNode *root, int **seqs, int *lens, int *count) {
  if (!root) {
    seqs[*count] = NULL;
    lens[*count] = 0;
    (*count)++;
    return;
  }
  int leftCount = 0, rightCount = 0;
  int **leftSeqs = (int **)malloc(sizeof(int *) * 1000);
  int *leftLens = (int *)malloc(sizeof(int) * 1000);
  int **rightSeqs = (int **)malloc(sizeof(int *) * 1000);
  int *rightLens = (int *)malloc(sizeof(int) * 1000);
  collect(root->left, leftSeqs, leftLens, &leftCount);
  collect(root->right, rightSeqs, rightLens, &rightCount);
  for (int i = 0; i < leftCount; i++) {
    for (int j = 0; j < rightCount; j++) {
      int prefix[1000];
      prefix[0] = root->val;
      weave(leftSeqs[i], leftLens[i], rightSeqs[j], rightLens[j], prefix, 1, seqs, count, &lens);
    }
  }
  for (int i = 0; i < leftCount; i++) free(leftSeqs[i]);
  for (int j = 0; j < rightCount; j++) free(rightSeqs[j]);
  free(leftSeqs);
  free(leftLens);
  free(rightSeqs);
  free(rightLens);
}

int **BSTSequences(struct TreeNode *root, int *returnSize, int **returnColumnSizes) {
  int **res = (int **)malloc(sizeof(int *) * 10000);
  *returnColumnSizes = (int *)malloc(sizeof(int) * 10000);
  *returnSize = 0;
  collect(root, res, *returnColumnSizes, returnSize);
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  struct TreeNode n2 = {2, NULL, NULL}, n1 = {1, NULL, NULL}, n3 = {3, NULL, NULL};
  n2.left = &n1;
  n2.right = &n3;
  printf("Input:  [2, 1, 3]\n");
  int size = 0;
  int *cols = NULL;
  int **res = BSTSequences(&n2, &size, &cols);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s[", i == 0 ? "" : ", ");
    for (int j = 0; j < cols[i]; j++) {
      printf("%s%d", j == 0 ? "" : ", ", res[i][j]);
    }
    printf("]");
    free(res[i]);
  }
  printf("]\n");
  free(res);
  free(cols);
  return EXIT_SUCCESS;
}
