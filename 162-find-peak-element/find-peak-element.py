class Solution(object):
    def findPeakElement(self, nums):

        n= len(nums)

        for i in range(n) :

            if ((i ==0 or nums[i] > nums[i-1]) and (i ==n-1 or nums[i]> nums[i+1])) :
                return i 
    


