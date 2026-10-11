class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const deleteDuplicates = (head: ListNode | null): ListNode | null => {
  let cur = head;
  while (cur && cur.next) {
    if (cur.val === cur.next.val) {
      cur.next = cur.next.next;
    } else {
      cur = cur.next;
    }
  }
  return head;
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

const head = intsToList([1, 1, 2]);
console.log(`Input:  ${listToInts(head)}`);
console.log(`Output: ${listToInts(deleteDuplicates(head))}`);
