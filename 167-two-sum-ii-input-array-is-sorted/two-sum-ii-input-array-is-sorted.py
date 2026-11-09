class Solution:
    def twoSum(self, arr,target) :
        l , r = 0 , len(arr) - 1 
        while l<r :
            if arr[l]+ arr[r] > target:
                r-=1
            
            elif arr[l]+arr[r] < target :
                l+=1 
            else :
                return [l+1,r+1]