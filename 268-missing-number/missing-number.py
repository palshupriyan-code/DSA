class Solution(object):
    def missingNumber(self, nums):

        n= len(nums)

        actual_sum = sum(nums)
        expected_sum = (n* (n+1)) // 2

        return expected_sum - actual_sum