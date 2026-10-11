class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const partition = (head: ListNode | null, x: number): ListNode | null => {
  const lessDummy = new ListNode(0);
  const greaterDummy = new ListNode(0);
  let less: ListNode = lessDummy;
  let greater: ListNode = greaterDummy;
  let cur = head;
  while (cur) {
    if (cur.val < x) {
      less.next = cur;
      less = cur;
    } else {
      greater.next = cur;
      greater = cur;
    }
    cur = cur.next;
  }
  greater.next = null;
  less.next = greaterDummy.next;
  return lessDummy.next;
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

const head = intsToList([1, 4, 3, 2, 5, 2]);
console.log(`Input:  ${listToInts(head)}, 3`);
console.log(`Output: ${listToInts(partition(head, 3))}`);
