import array from '../../library/typescript/array';

class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

// ------------------------------- solution begin -------------------------------
const addTwoNumbers = (l1: ListNode | null, l2: ListNode | null): ListNode | null => {
  const dummy = new ListNode(0);
  let cur = dummy;
  let carry = 0;

  while (l1 || l2 || carry) {
    const n1 = l1 ? l1.val : 0;
    const n2 = l2 ? l2.val : 0;
    const sum = n1 + n2 + carry;
    carry = Math.floor(sum / 10);
    cur.next = new ListNode(sum % 10);
    cur = cur.next;
    if (l1) l1 = l1.next;
    if (l2) l2 = l2.next;
  }

  return dummy.next;
};
// ------------------------------- solution end ---------------------------------

const intsToList = (nums: number[]): ListNode | null => {
  const dummy = new ListNode(0);
  let cur = dummy;
  for (const n of nums) {
    cur.next = new ListNode(n);
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

const input1 = intsToList([2, 4, 3]);
const input2 = intsToList([5, 6, 4]);

console.log(`Input:  ${array(listToInts(input1))} + ${array(listToInts(input2))}`);
console.log(`Output: ${array(listToInts(addTwoNumbers(input1, input2)))}`);
