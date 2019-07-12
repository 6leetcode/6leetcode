<?php

class Solution
{

    /**
     * @param Integer[] $nums1
     * @param Integer[] $nums2
     * @return Float
     */
    public function findMedianSortedArrays($nums1, $nums2)
    {
        $total = count($nums1) + count($nums2);

        $minKey = ceil($total / 2 - 1);   // 中间数key
        $maxKey = floor($total / 2);   // 中间数key

        // $i $nums1的循环key
        // $j $nums2的循环key
        // $current 当前循环的总次数 用来匹配中间数key
        // $min 中间数中的小值
        // $max 中间数中的大值 当两个数组总数为奇数时 min 和 max 相等 反之 则取两个值
        $i = $j = $current = $min = $max = 0;

        /**
         * 循环取两个数组里面的值，小的key值增加一直往后取
         * 直到总数达到计算的中间最大key结束循环
         */
        do {
            // 获取数组值，如果key不存在说明当前数组里面的值已经取完，
            // 把另一个数组当前值+1赋值是为了迎合下面的if判断
            $v1 = $nums1[$i] ?? ($nums2[$j] + 1);
            $v2 = $nums2[$j] ?? ($nums1[$i] + 1);

            if ($v1 > $v2) {
                $j++;
            } else {
                $i++;
            }


            if ($current == $minKey) {
                $min = $v1 > $v2 ? $v2 : $v1;   // 较小的值为赋值对象
            }

            if ($current == $maxKey) {
                $max = $v1 > $v2 ? $v2 : $v1;   // 较小的值为赋值对象
                break;
            }

            $current++;
        } while (true);

        return ($min + $max) / 2;
    }
}
