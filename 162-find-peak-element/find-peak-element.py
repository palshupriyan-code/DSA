class Solution(object):
    def findPeakElement(self, nums):

        n= len(nums)
        if n == 1 :
            return 0
        
        for i in range(n) :

            if i ==n-1 :
                if nums[n-1] > nums[n-2] :
                    
                    return n-1

            if nums[i] > nums[i-1] and nums[i]> nums[i +1] :

                return i

