class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const reorderList = (head: ListNode | null): void => {
  if (!head || !head.next) {
    return;
  }

  let slow: ListNode = head;
  let fast: ListNode = head;
  while (fast.next && fast.next.next) {
    slow = slow.next;
    fast = fast.next.next;
  }

  let second: ListNode | null = slow.next;
  slow.next = null;

  let prev: ListNode | null = null;
  while (second) {
    const nxt: ListNode | null = second.next;
    second.next = prev;
    prev = second;
    second = nxt;
  }

  let first: ListNode | null = head;
  second = prev;
  while (second) {
    const fnext: ListNode | null = first!.next;
    const snext: ListNode | null = second.next;
    first!.next = second;
    second.next = fnext;
    first = fnext;
    second = snext;
  }
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
  reorderList(head);
  console.log(`Output: ${listToInts(head)}`);
};

run([1, 2, 3, 4]);
run([1, 2, 3, 4, 5]);
run([1]);
