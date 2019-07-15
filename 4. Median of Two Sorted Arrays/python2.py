#!/usr/bin/env python3
# -*- coding: UTF-8 -*-


class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1.extend(nums2)
        nums1.sort()
        result = 0
        length = len(nums1)
        if length % 2 == 0:
            result = (nums1[int(length / 2 - 1)] +
                      nums1[int(length / 2)]) / 2.0
        else:
            result = nums1[int(length / 2)]
        return result


if __name__ == "__main__":
    input1 = [1, 4, 2, 3]
    input2 = [9, 8, 4, 1]
    solution = Solution()
    print("Input:", input1, input2)
    print("Output:", solution.findMedianSortedArrays(input1, input2))
