class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const getIntersectionNode = (headA: ListNode | null, headB: ListNode | null): ListNode | null => {
  let a = headA;
  let b = headB;
  while (a !== b) {
    a = a === null ? headB : a.next;
    b = b === null ? headA : b.next;
  }
  return a;
};
// ------------------------------- solution end ---------------------------------

const s1 = new ListNode(8);
const s2 = new ListNode(4);
const s3 = new ListNode(5);
s1.next = s2;
s2.next = s3;
const a2 = new ListNode(1, s1);
const a1 = new ListNode(4, a2);
const b3 = new ListNode(1, s1);
const b2 = new ListNode(0, b3);
const b1 = new ListNode(5, b2);
console.log(`Input:  [4, 1, 8, 4, 5], [5, 0, 1, 8, 4, 5]`);
const res = getIntersectionNode(a1, b1);
console.log(res ? `Output: Intersected at '${res.val}'` : 'Output: No intersection');
