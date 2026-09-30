class Solution(object):
    def twoSum(self, nums, target):
        for i,num in enumerate(nums):
            remain=target-num
            if remain in nums and i!=nums.index(remain):
                return ([nums.index(remain),i])