#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// ------------------------------- solution begin -------------------------------
static void weave(int *left, int leftLen, int *right, int rightLen, int *sequence, int sequenceLen,
                  int **results, int *resultCount, int **resultColSizes) {
  if (leftLen == 0 && rightLen == 0) {
    results[*resultCount] = (int *)malloc(sizeof(int) * sequenceLen);
    for (int i = 0; i < sequenceLen; i++) results[*resultCount][i] = sequence[i];
    (*resultColSizes)[*resultCount] = sequenceLen;
    (*resultCount)++;
    return;
  }
  if (leftLen > 0) {
    sequence[sequenceLen] = left[0];
    weave(left + 1, leftLen - 1, right, rightLen, sequence, sequenceLen + 1, results, resultCount, resultColSizes);
  }
  if (rightLen > 0) {
    sequence[sequenceLen] = right[0];
    weave(left, leftLen, right + 1, rightLen - 1, sequence, sequenceLen + 1, results, resultCount, resultColSizes);
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
