<?php
function findMedianSortedArrays($nums1, $nums2)
{
    $len1 = count($nums1);
    $len2 = count($nums2);

    if ($len1 > $len2) {
        list($nums1, $nums2, $len1, $len2) = [$nums2, $nums1, $len2, $len1];
    }

    $imin = 0;
    $imax = $len1;
    $half = floor(($len1 + $len2) / 2);

    while ($imin <= $imax) {
        $i = floor(($imin + $imax) / 2);
        $j = $half - $i;

        if ($i < $len1 && $nums2[$j - 1] > $nums1[$i]) {
            $imin = $i + 1;
        } elseif ($i > 0 && $nums1[$i - 1] > $nums2[$j]) {
            $imax = $i - 1;
        } else { // 总数是偶数
            if (($len1 + $len2) % 2 == 0) {
                $min = ($i > 0 && $nums1[$i - 1 == -1 ? 0 : $i - 1] > $nums2[$j - 1 == -1 ? 0 : $j - 1]) ? $nums1[$i - 1 == -1 ? 0 : $i - 1] : $nums2[$j - 1 == -1 ? 0 : $j - 1];
                if ($i < $len1) {
                    $max = ($j < $len2 && $nums1[$i] > $nums2[$j]) ? $nums2[$j] : $nums1[$i];
                } else {
                    $max = $nums2[$j];
                }
                return ($min + $max) / 2;
            } else {
                return ($i < $len1 && $nums1[$i] < $nums2[$j]) ? $nums1[$i] : $nums2[$j];
            }
        }
    }
}

$arr1 = [1, 2, 3, 4];
$arr2 = [6, 7, 8, 9];
echo "Input: [ ";
for ($i = 0; $i < count($arr1); $i++) {
    echo $arr1[$i] . " ";
}
echo "] [ ";
for ($i = 0; $i < count($arr2); $i++) {
    echo $arr2[$i] . " ";
}
echo "]\n";
echo "Output: " . findMedianSortedArrays([1, 2, 3, 4], [6, 7, 8, 9]) . "\n";
