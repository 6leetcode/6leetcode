class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const insertionSortList = (head: ListNode | null): ListNode | null => {
  const dummy = new ListNode(0);
  let cur = head;
  while (cur) {
    const next = cur.next;
    let prev: ListNode = dummy;
    while (prev.next && prev.next.val < cur.val) {
      prev = prev.next;
    }
    cur.next = prev.next;
    prev.next = cur;
    cur = next;
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

const run = (nums: number[]): void => {
  const head = intsToList(nums);
  console.log(`Input:  ${listToInts(head)}`);
  console.log(`Output: ${listToInts(insertionSortList(head))}`);
};

run([4, 2, 1, 3]);
run([-1, 5, 3, 4, 0]);
