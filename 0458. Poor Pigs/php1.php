<?php
/**
 * Created by PhpStorm.
 * User: smallForest<1032817724@qq.com>
 * Date: 2019-08-05
 * Time: 15:43
 */
class Solution {

    /**
     * @param Integer $buckets
     * @param Integer $minutesToDie
     * @param Integer $minutesToTest
     * @return Integer
     */
    function poorPigs($buckets, $minutesToDie, $minutesToTest) {
        $times = floor($minutesToTest / $minutesToDie);
	    $base = $times + 1;
	    $temp = log($buckets) / log($base);
	    $ans = ceil($temp);
	    return $ans;
    }
}
$obj = new Solution();
$r = $obj->poorPigs(25,15,60);
echo $r;
