class Solution(object):
    def missingNumber(self, nums):

        # n= len(nums)

        # actual_sum = sum(nums)
        # expected_sum = (n* (n+1)) // 2

        # return expected_sum - actual_sum
        num_set = set(nums)
        for i in range(len(nums) + 1):
            if i not in num_set:
                return i