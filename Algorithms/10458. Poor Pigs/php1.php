<?php

class Solution
{
    /**
     * @param Integer $buckets
     * @param Integer $minutesToDie
     * @param Integer $minutesToTest
     * @return Integer
     */
    public function poorPigs($buckets, $minutesToDie, $minutesToTest)
    {
        $times = floor($minutesToTest / $minutesToDie);
        $base = $times + 1;
        $temp = log($buckets) / log($base);
        $ans = ceil($temp);
        return $ans;
    }
}

$solution = new Solution();

$buckets = 1000;
$minutesToDie = 15;
$minutesToTest = 1000;

$ans = $solution->poorPigs(25, 15, 60);

echo "Input:  " . $buckets . ", " . $minutesToDie . ", " . $minutesToTest . "\n";
echo "Output: " . $ans . "\n";
