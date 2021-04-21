<?
/**
 * @param Integer[] $nums
 * @return String
 */
function array_show($nums) {
    if (count($nums) == 0) {
        return "";
    }
    $res = "[";
    for ($i = 0; $i < count($nums); $i++) {
        if ($i == 0) {
            $res = $res . strval($nums[$i]);
        } else {
            $res = $res . ", " . strval($nums[$i]);
        }
    }
    return $res . "]";
}
