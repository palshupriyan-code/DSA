class Solution(object):
    def findMin(self, num):
        n = len (num) 

        low = 0 ; high = n-1 
        ans = float("inf")
        while low <= high :
            mid = (low + high) // 2

            if num [low] <= num [mid] :
                ans = min(num[low] , ans)
                low = mid + 1

            else :
                ans = min(num[mid] , ans )
                high = mid - 1
        return ans