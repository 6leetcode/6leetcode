class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const mergeTwoLists = (a: ListNode | null, b: ListNode | null): ListNode | null => {
  const dummy = new ListNode(0);
  let tail: ListNode = dummy;
  while (a && b) {
    if (a.val <= b.val) {
      tail.next = a;
      a = a.next;
    } else {
      tail.next = b;
      b = b.next;
    }
    tail = tail.next;
  }
  tail.next = a ? a : b;
  return dummy.next;
};

const sortList = (head: ListNode | null): ListNode | null => {
  if (!head || !head.next) return head;

  let slow = head;
  let fast: ListNode | null = head.next;
  while (fast && fast.next) {
    slow = slow.next!;
    fast = fast.next.next;
  }

  const mid = slow.next;
  slow.next = null;

  return mergeTwoLists(sortList(head), sortList(mid));
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
  console.log(`Output: ${listToInts(sortList(head))}`);
};

run([4, 2, 1, 3]);
run([-1, 5, 3, 4, 0]);
run([]);
