class Solution(object):
    def findMin(self, num):
        n = len (num) 

        low = 0 ; high = n-1 

        while low < high :
            mid = (low + high) // 2
            if num [high ] < num [mid] :
                low= mid + 1 

            else :
                
                high = mid

        return num[low] 