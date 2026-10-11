class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const removeNthFromEnd = (head: ListNode | null, n: number): ListNode | null => {
  const dummy = new ListNode(0, head);
  let fast: ListNode | null = dummy;
  let slow: ListNode | null = dummy;

  for (let i = 0; i < n; i++) {
    fast = fast!.next;
  }
  while (fast!.next) {
    fast = fast!.next;
    slow = slow!.next;
  }
  slow!.next = slow!.next!.next;

  return dummy.next;
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
const n = 2;
console.log(`Input:  ${listToInts(head)} ${n}`);
console.log(`Output: ${listToInts(removeNthFromEnd(head, n))}`);
