#include <stdio.h>
#include <stdlib.h>

// ------------------------------- solution begin -------------------------------
#define LRU_BUCKETS 10007

struct LRUNode {
  int key;
  int value;
  struct LRUNode *prev;
  struct LRUNode *next;
};

struct LRUEntry {
  int key;
  struct LRUNode *node;
  struct LRUEntry *next;
};

typedef struct {
  int capacity;
  int count;
  struct LRUNode *head; // least recently used
  struct LRUNode *tail; // most recently used
  struct LRUEntry *buckets[LRU_BUCKETS];
} LRUCache;

static unsigned int lruHash(int key) {
  return ((unsigned int)key) % LRU_BUCKETS;
}

static void lruUnlink(LRUCache *cache, struct LRUNode *node) {
  if (node->prev) {
    node->prev->next = node->next;
  } else {
    cache->head = node->next;
  }
  if (node->next) {
    node->next->prev = node->prev;
  } else {
    cache->tail = node->prev;
  }
}

static void lruPushBack(LRUCache *cache, struct LRUNode *node) {
  node->prev = cache->tail;
  node->next = NULL;
  if (cache->tail) {
    cache->tail->next = node;
  } else {
    cache->head = node;
  }
  cache->tail = node;
}

static struct LRUEntry *lruFindEntry(LRUCache *cache, int key) {
  struct LRUEntry *e = cache->buckets[lruHash(key)];
  while (e) {
    if (e->key == key) return e;
    e = e->next;
  }
  return NULL;
}

LRUCache *lRUCacheCreate(int capacity) {
  LRUCache *cache = (LRUCache *)calloc(1, sizeof(LRUCache));
  cache->capacity = capacity;
  cache->count = 0;
  cache->head = NULL;
  cache->tail = NULL;
  return cache;
}

int lRUCacheGet(LRUCache *obj, int key) {
  struct LRUEntry *e = lruFindEntry(obj, key);
  if (!e) return -1;
  lruUnlink(obj, e->node);
  lruPushBack(obj, e->node);
  return e->node->value;
}

void lRUCachePut(LRUCache *obj, int key, int value) {
  struct LRUEntry *e = lruFindEntry(obj, key);
  if (e) {
    e->node->value = value;
    lruUnlink(obj, e->node);
    lruPushBack(obj, e->node);
    return;
  }

  if (obj->count == obj->capacity) {
    struct LRUNode *old = obj->head;
    unsigned int h = lruHash(old->key);
    struct LRUEntry **pp = &obj->buckets[h];
    while (*pp) {
      if ((*pp)->key == old->key) {
        struct LRUEntry *dead = *pp;
        *pp = dead->next;
        free(dead);
        break;
      }
      pp = &(*pp)->next;
    }
    lruUnlink(obj, old);
    free(old);
    obj->count--;
  }

  struct LRUNode *node = (struct LRUNode *)malloc(sizeof(struct LRUNode));
  node->key = key;
  node->value = value;
  lruPushBack(obj, node);

  struct LRUEntry *entry = (struct LRUEntry *)malloc(sizeof(struct LRUEntry));
  entry->key = key;
  entry->node = node;
  unsigned int h = lruHash(key);
  entry->next = obj->buckets[h];
  obj->buckets[h] = entry;
  obj->count++;
}

void lRUCacheFree(LRUCache *obj) {
  struct LRUNode *n = obj->head;
  while (n) {
    struct LRUNode *next = n->next;
    free(n);
    n = next;
  }
  for (int i = 0; i < LRU_BUCKETS; i++) {
    struct LRUEntry *e = obj->buckets[i];
    while (e) {
      struct LRUEntry *next = e->next;
      free(e);
      e = next;
    }
  }
  free(obj);
}
// ------------------------------- solution end ---------------------------------

int main(int argc, char const *argv[]) {
  LRUCache *c1 = lRUCacheCreate(2);
  lRUCachePut(c1, 1, 1);
  lRUCachePut(c1, 2, 2);
  int a1 = lRUCacheGet(c1, 1);
  lRUCachePut(c1, 3, 3);
  int a2 = lRUCacheGet(c1, 2);
  lRUCachePut(c1, 4, 4);
  int a3 = lRUCacheGet(c1, 1);
  int a4 = lRUCacheGet(c1, 3);
  int a5 = lRUCacheGet(c1, 4);
  printf("Input:  [\"LRUCache\",\"put\",\"put\",\"get\",\"put\",\"get\",\"put\",\"get\",\"get\",\"get\"] "
         "[[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]\n");
  printf("Output: [null, null, null, %d, null, %d, null, %d, %d, %d]\n", a1, a2, a3, a4, a5);
  lRUCacheFree(c1);

  LRUCache *c2 = lRUCacheCreate(1);
  lRUCachePut(c2, 2, 1);
  int b1 = lRUCacheGet(c2, 2);
  lRUCachePut(c2, 3, 2);
  int b2 = lRUCacheGet(c2, 2);
  int b3 = lRUCacheGet(c2, 3);
  printf("Input:  [\"LRUCache\",\"put\",\"get\",\"put\",\"get\",\"get\"] [[1],[2,1],[2],[3,2],[2],[3]]\n");
  printf("Output: [null, null, %d, null, %d, %d]\n", b1, b2, b3);
  lRUCacheFree(c2);

  return EXIT_SUCCESS;
}
