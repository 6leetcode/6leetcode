class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const detectCycle = (head: ListNode | null): ListNode | null => {
  let slow = head;
  let fast = head;
  while (fast && fast.next) {
    slow = slow!.next;
    fast = fast.next.next;
    if (slow === fast) {
      let p = head;
      while (p !== slow) {
        p = p!.next;
        slow = slow!.next;
      }
      return p;
    }
  }
  return null;
};
// ------------------------------- solution end ---------------------------------

const build = (nums: number[], pos: number): { head: ListNode | null; nodes: ListNode[] } => {
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
  return { head: dummy.next, nodes };
};

const run = (nums: number[], pos: number): void => {
  console.log(`Input:  head = ${JSON.stringify(nums)}, pos = ${pos}`);
  const { head, nodes } = build(nums, pos);
  const res = detectCycle(head);
  const idx = res === null ? -1 : nodes.indexOf(res);
  console.log(`Output: ${idx >= 0 ? idx : "null"}`);
};

run([3, 2, 0, -4], 1);
run([1, 2], 0);
run([1], -1);
run([], -1);
