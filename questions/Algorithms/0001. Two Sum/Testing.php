<?php

include "../../library/php/array.php";

class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $map = [];
        for ($i = 0; $i < count($nums); $i++) {
            $map[$nums[$i]] = $i;
        }
        for ($i = 0; $i < count($nums); $i++) {
            $complement = $target - $nums[$i];
            if (array_key_exists($complement, $map) && $map[$complement] != $i) {
                return [$i, $map[$complement]];
            }
        }
        throw new IllegalArgumentException("No two sum solution");
    }
}

$input1 = [1,2,3];
$input2 = 3;

print("Input:  " . array_show($input1) . ", " . strval($input2) . "\n");

$solution = new Solution();
print("Output: " . array_show($solution->twoSum([1,2,3], 3)) . "\n");
