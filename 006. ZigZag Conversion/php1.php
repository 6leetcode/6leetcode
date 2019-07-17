<?php

class Solution {
    /**
     * @param String $s
     * @param Integer $numRows
     * @return String
     */
    function convert($s, $numRows) {
        $res = [];
        $j = 0;
        $flag = 1;  
        
        for($i=0;$i<strlen($s);$i++){
            $res[$j][] = $s[$i];

            if($j == 0 && $j == $numRows-1){ 
                $flag = -1;
            }

            if(1 == $flag){
                if($j >= $numRows -1){
                    $flag = 0;
                    $j--;
                }else{
                    $j++;        
                }
            
            }elseif (0 == $flag){
                if($j <= 0){
                    $flag = 1;
                    $j++;
                }else{
                    $j--;   
                }
            }            
        } 
        
        $resStr = '';
        foreach($res as $k=>$v){
            $resStr .= implode("",$v);
        }
        
        return $resStr;
    }
}
