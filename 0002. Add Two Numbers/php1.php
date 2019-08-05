<?php

/**
 * Definition for a singly-linked list.
 * class ListNode {
 *     public $val = 0;
 *     public $next = null;
 *     function __construct($val) { $this->val = $val; }
 * }
 */
class Solution
{

    /**
     * @param ListNode $l1
     * @param ListNode $l2
     * @return ListNode
     */
    public function addTwoNumbers($l1, $l2)
    {
        $obj     = null;
        $prevObj = null;
        $carry   = 0;
        do {
            $v1 = is_object($l1) ? $l1->val : 0;
            $v2 = is_object($l2) ? $l2->val : 0;

            $nodeVal = $v1 + $v2 + $carry;
            if ($nodeVal >= 10) {
                $nodeVal -= 10;
                $carry   = 1;
            } else {
                $carry = 0;
            }

            $tmpObj = new listNode($nodeVal);

            if (empty($obj)) {
                $obj = $tmpObj;
            } else {
                $prevObj->next = $tmpObj;
            }

            $prevObj = $tmpObj;
            $l1      = (is_object($l1) && $l1->next) ? $l1->next : 0;
            $l2      = (is_object($l2) && $l2->next) ? $l2->next : 0;
        } while (is_object($l1) || is_object($l2) || $carry);

        return $obj;
    }
}
