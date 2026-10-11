class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const kthToLast = (head: ListNode | null, k: number): number => {
  let fast = head;
  let slow = head;
  for (let i = 0; i < k; i++) fast = fast!.next;
  while (fast) {
    fast = fast.next;
    slow = slow!.next;
  }
  return slow!.val;
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
console.log(`Output: ${kthToLast(head, 2)}`);
