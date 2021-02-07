#include <stdio.h>
#include <string.h>

#include <sds.h>

sds array_show(int *arr, int size) {
  sds str = sdsnew("[");
  if (size == 0) {
    str = sdscat(str, " ");
  } else if (size == 1) {
    str = sdscatprintf(str, "%d", arr[0]);
  } else {
    str = sdscatprintf(str, "%d", arr[0]);
    for (int i = 1; i < size; ++i) {
      str = sdscatprintf(str, ", %d", arr[i]);
    }
  }
  str = sdscat(str, "]");
  return str;
}
