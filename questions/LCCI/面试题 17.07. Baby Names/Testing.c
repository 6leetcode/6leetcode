#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  char name[120];
  int count;
  int parent;
} Person;

static int findRoot(Person *people, int i) {
  while (people[i].parent != i) {
    people[i].parent = people[people[i].parent].parent;
    i = people[i].parent;
  }
  return i;
}

static int indexOf(Person *people, int n, const char *name) {
  for (int i = 0; i < n; i++) {
    if (strcmp(people[i].name, name) == 0) return i;
  }
  return -1;
}

static int cmpStr(const void *a, const void *b) {
  return strcmp(*(char **)a, *(char **)b);
}

char **trulyMostPopular(char **names, int namesSize, char **synonyms, int synonymsSize, int *returnSize) {
  static Person people[20000];
  int n = 0;
  for (int i = 0; i < namesSize; i++) {
    char name[120];
    int cnt;
    sscanf(names[i], "%[^(](%d)", name, &cnt);
    strcpy(people[n].name, name);
    people[n].count = cnt;
    people[n].parent = n;
    n++;
  }
  for (int i = 0; i < synonymsSize; i++) {
    char a[120], b[120];
    sscanf(synonyms[i], "(%[^,],%[^)])", a, b);
    if (indexOf(people, n, a) < 0) {
      strcpy(people[n].name, a);
      people[n].count = 0;
      people[n].parent = n;
      n++;
    }
    if (indexOf(people, n, b) < 0) {
      strcpy(people[n].name, b);
      people[n].count = 0;
      people[n].parent = n;
      n++;
    }
  }
  for (int i = 0; i < synonymsSize; i++) {
    char a[120], b[120];
    sscanf(synonyms[i], "(%[^,],%[^)])", a, b);
    int ra = findRoot(people, indexOf(people, n, a));
    int rb = findRoot(people, indexOf(people, n, b));
    if (ra != rb) {
      if (strcmp(people[ra].name, people[rb].name) < 0) {
        people[rb].parent = ra;
      } else {
        people[ra].parent = rb;
      }
    }
  }
  int agg[20000] = {0};
  for (int i = 0; i < n; i++) {
    agg[findRoot(people, i)] += people[i].count;
  }
  char **res = (char **)malloc(sizeof(char *) * n);
  int size = 0;
  for (int i = 0; i < n; i++) {
    if (agg[i] > 0) {
      res[size] = (char *)malloc(160);
      sprintf(res[size], "%s(%d)", people[i].name, agg[i]);
      size++;
    }
  }
  qsort(res, size, sizeof(char *), cmpStr);
  *returnSize = size;
  return res;
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  char *names[] = {"John(15)", "Jon(12)", "Chris(13)", "Kris(4)", "Christopher(19)"};
  char *synonyms[] = {"(Jon,John)", "(John,Johnny)", "(Chris,Kris)", "(Chris,Christopher)"};
  printf("Input:  names = [John(15), Jon(12), Chris(13), Kris(4), Christopher(19)], synonyms = [(Jon,John),(John,Johnny),(Chris,Kris),(Chris,Christopher)]\n");
  int size = 0;
  char **res = trulyMostPopular(names, 5, synonyms, 4, &size);
  printf("Output: [");
  for (int i = 0; i < size; i++) {
    printf("%s\"%s\"", i == 0 ? "" : ", ", res[i]);
    free(res[i]);
  }
  printf("]\n");
  free(res);
  return EXIT_SUCCESS;
}
