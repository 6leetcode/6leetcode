class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const reverseBetween = (head: ListNode | null, left: number, right: number): ListNode | null => {
  const dummy = new ListNode(0, head);
  let pre: ListNode = dummy;
  for (let i = 0; i < left - 1; i++) pre = pre.next!;
  let cur = pre.next!;
  for (let i = 0; i < right - left; i++) {
    const next = cur.next!;
    cur.next = next.next;
    next.next = pre.next;
    pre.next = next;
  }
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
console.log(`Input:  ${listToInts(head)}, 2, 4`);
console.log(`Output: ${listToInts(reverseBetween(head, 2, 4))}`);
