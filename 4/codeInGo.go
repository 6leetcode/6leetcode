package problem

import (
	"fmt"
	"math"
)
func FindMedianSortedArFrays(nums1 []int, nums2 []int) float64{
	total:=len(nums1)+len(nums2);

	minKey := int(math.Ceil(float64(total)/2-1));
	maxKey:=total/2;
	fmt.Println(minKey,maxKey);

	i:=0;//nums1 索引
	j:=0;//nums2 索引
	min:=0;
	max:=0;
	current:=0;
	v1:=0;
	v2:=0;
	for k:=0;k<1;k-- {

		if i<len(nums1) && !math.IsNaN(float64(nums1[i])){
			v1=nums1[i];
		}else{
			v1=nums2[j]+1;
		}

		if j<len(nums2) && !math.IsNaN(float64(nums2[j])){
			v2=nums2[j];
		}else{
			fmt.Println(i);
			v2=nums1[i]+1;
		}
		if v1>v2 {
			j++;
		}else{
			i++;
		}

		if current == minKey {
			if v1>v2 {
				min = v2;
			}else{
				min = v1;
			}
		}
		if current==maxKey{
			if v1>v2 {
				max = v2;
			}else{
				max = v1;
			}
			break;
		}
		current++;
	}
	return float64(min+max)/2;
}
