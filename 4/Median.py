#!/usr/bin/python
# -*- coding: UTF-8 -*-

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        total = len(nums1) + len(nums2)

        median = total/2

        if total%2 == 0 : 
            minKey = int(median)-1
        else :
            minKey = int(median)

        maxKey = int(median)

        """
        i $nums1的循环key
        j $nums2的循环key
        current 当前循环的总次数 用来匹配中间数key
        min 中间数中的小值
        max 中间数中的大值 当两个数组总数为奇数时 min 和 max 相等 反之 则取两个值
        """
        i=j=current=min=max=0;

        """
        * 循环取两个数组里面的值，小的key值增加一直往后取
        * 直到总数达到计算的中间最大key结束循环
        """
        while 1==1 :
            # 获取数组值，如果key不存在说明当前数组里面的值已经取完，
            # 把另一个数组当前值+1赋值是为了迎合下面的if判断

            if i<len(nums1) :
                v1 = nums1[i]
            else :
                v1 = nums2[j]+1

            if j<len(nums2) :
                v2 = nums2[j]
            else :
                v2 = nums1[i]+1

            if v1 > v2 :
                j +=1
            else :
                i +=1

            if current == minKey :
                if v1 > v2 :
                    min = v2
                else :
                    min = v1    # 较小的值为赋值对象

            if current == maxKey :
                if v1 > v2 :
                    max = v2    # 较小的值为赋值对象
                else :
                    max = v1
                break

            current +=1

        return (min+max)/2.0
