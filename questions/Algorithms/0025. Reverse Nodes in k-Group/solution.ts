class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const reverseKGroup = (head: ListNode | null, k: number): ListNode | null => {
  if (head === null) return head;
  let tail: ListNode | null = head;
  for (let i = 0; i < k; i++) {
    if (tail === null) return head;
    tail = tail.next;
  }
  let cur: ListNode | null = head;
  let pre: ListNode | null = null;
  while (cur !== tail) {
    const next: ListNode | null = cur!.next;
    cur!.next = pre;
    pre = cur;
    cur = next;
  }
  head.next = reverseKGroup(tail, k);
  return pre;
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
const k = 2;
console.log(`Input:  ${listToInts(head)} ${k}`);
console.log(`Output: ${listToInts(reverseKGroup(head, k))}`);
