class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const hasCycle = (head: ListNode | null): boolean => {
  let slow = head;
  let fast = head;
  while (fast && fast.next) {
    slow = slow!.next;
    fast = fast.next.next;
    if (slow === fast) {
      return true;
    }
  }
  return false;
};
// ------------------------------- solution end ---------------------------------

const intsToList = (nums: number[], pos: number): ListNode | null => {
  const dummy = new ListNode(0);
  let cur: ListNode = dummy;
  const nodes: ListNode[] = [];
  for (const v of nums) {
    cur.next = new ListNode(v);
    cur = cur.next;
    nodes.push(cur);
  }
  if (pos >= 0 && nodes.length > 0) {
    cur.next = nodes[pos];
  }
  return dummy.next;
};

const run = (nums: number[], pos: number): void => {
  console.log(`Input:  head = ${JSON.stringify(nums)}, pos = ${pos}`);
  console.log(`Output: ${hasCycle(intsToList(nums, pos))}`);
};

run([3, 2, 0, -4], 1);
run([1, 2], 0);
run([1], -1);
run([], -1);
