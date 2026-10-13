class Solution(object):
    def search(self, nums, target):

        low = 0 ; n = len(nums) ; high = n-1 ; 

        while low <= high :

            mid  =(low + high ) // 2 

            if nums[mid] == target :
                return mid 
            
            #  Left Sorted :
 
            if nums[ low ] <= nums [mid] :

                if target >= nums[low ] and target <= nums[mid] :
                    high = mid - 1

                else :
                    low = mid + 1 

            # Right sorted :

            else :

                if target >= nums[mid ] and target <= nums[high]:

                    low = mid +1 

                else :
                    high = mid -1

        return -1



                