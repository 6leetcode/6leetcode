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
  if (a === null) return b;
  if (b === null) return a;
  if (a.val < b.val) {
    a.next = mergeTwoLists(a.next, b);
    return a;
  }
  b.next = mergeTwoLists(a, b.next);
  return b;
};

const mergeKLists = (lists: Array<ListNode | null>): ListNode | null => {
  let ans: ListNode | null = null;
  for (const l of lists) {
    ans = mergeTwoLists(ans, l);
  }
  return ans;
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

const lists = [intsToList([1, 4, 5]), intsToList([1, 3, 4]), intsToList([2, 6])];
console.log(`Input:  ${lists.map(listToInts).join(' ')}`);
console.log(`Output: ${listToInts(mergeKLists(lists))}`);
