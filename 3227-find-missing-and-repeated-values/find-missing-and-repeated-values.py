class Solution(object):
    def findMissingAndRepeatedValues(self, nums):
        n = len(nums)
        N = n * n  
        
        
        S1 = N * (N + 1) // 2
        S2 = N * (N + 1) * (2 * N + 1) // 6
        
       
        A1 = 0
        A2 = 0
        
        for row in nums:
            for num in row:
                A1 += num
                A2 += num * num
        
    
        val1 = A1 - S1
        
  
        val2 = A2 - S2
        
       
        val3 = val2 // val1
        
        x = (val1 + val3) // 2 
        y = x - val1            
        
        return [x, y]