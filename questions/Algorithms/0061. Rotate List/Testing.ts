class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const rotateRight = (head: ListNode | null, k: number): ListNode | null => {
  if (head === null || head.next === null || k === 0) return head;
  let len = 1;
  let tail = head;
  while (tail.next) {
    tail = tail.next;
    len++;
  }
  k %= len;
  if (k === 0) return head;
  tail.next = head;
  let newTail: ListNode = head;
  for (let i = 0; i < len - k - 1; i++) newTail = newTail.next!;
  const newHead = newTail.next;
  newTail.next = null;
  return newHead;
};
// ------------------------------- solution end ---------------------------------

const intsToList = (nums: number[]): ListNode | null => {
  const dummy = new ListNode(0);
  let cur = dummy;
  for (const v of nums) {
    cur.next = new ListNode(v);
    cur = cur.next;
  }
  return dummy.next;
};

const listToInts = (head: ListNode | null): number[] => {
  const res: number[] = [];
  while (head) {
    res.push(head.val);
    head = head.next;
  }
  return res;
};

const head = intsToList([1, 2, 3, 4, 5]);
console.log(`Input:  ${listToInts(head)}, 2`);
console.log(`Output: ${listToInts(rotateRight(head, 2))}`);
