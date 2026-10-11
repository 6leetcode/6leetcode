class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const removeDuplicateNodes = (head: ListNode | null): ListNode | null => {
  const seen = new Set<number>();
  const dummy = new ListNode(0, head);
  let prev: ListNode = dummy;
  let cur = head;
  while (cur) {
    if (seen.has(cur.val)) {
      prev.next = cur.next;
      cur = prev.next;
    } else {
      seen.add(cur.val);
      prev = cur;
      cur = cur.next;
    }
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

const head = intsToList([1, 2, 3, 3, 2, 1]);
console.log(`Input:  ${listToInts(head)}`);
console.log(`Output: ${listToInts(removeDuplicateNodes(head))}`);
