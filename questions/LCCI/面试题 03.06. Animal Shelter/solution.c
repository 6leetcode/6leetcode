#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
typedef struct {
  int num[20001], order[20001], head, tail;
} Q;

typedef struct {
  Q cats;
  Q dogs;
  int order;
} AnimalShelf;

AnimalShelf *animalShelfCreate(void) {
  AnimalShelf *obj = (AnimalShelf *)malloc(sizeof(AnimalShelf));
  obj->cats.head = obj->cats.tail = 0;
  obj->dogs.head = obj->dogs.tail = 0;
  obj->order = 0;
  return obj;
}

void animalShelfEnqueue(AnimalShelf *obj, int *animal, int animalSize) {
  (void)animalSize;
  if (animal[1] == 0) {
    obj->cats.num[obj->cats.tail] = animal[0];
    obj->cats.order[obj->cats.tail] = obj->order++;
    obj->cats.tail++;
  } else {
    obj->dogs.num[obj->dogs.tail] = animal[0];
    obj->dogs.order[obj->dogs.tail] = obj->order++;
    obj->dogs.tail++;
  }
}

void animalShelfDequeueAny(AnimalShelf *obj, int *res) {
  int hasCat = obj->cats.head < obj->cats.tail;
  int hasDog = obj->dogs.head < obj->dogs.tail;
  if (!hasCat && !hasDog) {
    res[0] = res[1] = -1;
    return;
  }
  if (hasCat && (!hasDog || obj->cats.order[obj->cats.head] < obj->dogs.order[obj->dogs.head])) {
    res[0] = obj->cats.num[obj->cats.head++];
    res[1] = 0;
  } else {
    res[0] = obj->dogs.num[obj->dogs.head++];
    res[1] = 1;
  }
}

void animalShelfDequeueDog(AnimalShelf *obj, int *res) {
  if (obj->dogs.head < obj->dogs.tail) {
    res[0] = obj->dogs.num[obj->dogs.head++];
    res[1] = 1;
  } else {
    res[0] = res[1] = -1;
  }
}

void animalShelfDequeueCat(AnimalShelf *obj, int *res) {
  if (obj->cats.head < obj->cats.tail) {
    res[0] = obj->cats.num[obj->cats.head++];
    res[1] = 0;
  } else {
    res[0] = res[1] = -1;
  }
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  printf("Input:  [\"AnimalShelf\", \"enqueue\", \"enqueue\", \"enqueue\", \"dequeueDog\", \"dequeueCat\", \"dequeueAny\"]\n");
  AnimalShelf *obj = animalShelfCreate();
  int a1[2] = {0, 0}, a2[2] = {1, 0}, a3[2] = {2, 1};
  animalShelfEnqueue(obj, a1, 2);
  animalShelfEnqueue(obj, a2, 2);
  animalShelfEnqueue(obj, a3, 2);
  int r1[2], r2[2], r3[2];
  animalShelfDequeueDog(obj, r1);
  animalShelfDequeueCat(obj, r2);
  animalShelfDequeueAny(obj, r3);
  printf("Output: [null, null, null, null, [%d,%d], [%d,%d], [%d,%d]]\n",
         r1[0], r1[1], r2[0], r2[1], r3[0], r3[1]);
  free(obj);
  return EXIT_SUCCESS;
}
