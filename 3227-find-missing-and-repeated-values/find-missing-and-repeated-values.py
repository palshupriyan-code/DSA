class Solution(object):
    def findMissingAndRepeatedValues(self, nums):
        n = len(nums)
        N = n * n  # Total elements in an n x n grid
        
        # 1. Expected sum and expected sum of squares from 1 to N
        S1 = N * (N + 1) // 2
        S2 = N * (N + 1) * (2 * N + 1) // 6
        
        # 2. Actual sum and actual sum of squares from the grid
        A1 = 0
        A2 = 0
        
        for row in nums:
            for num in row:
                A1 += num
                A2 += num * num
        
        # val1 = x - y (where x is repeated, y is missing)
        val1 = A1 - S1
        
        # val2 = x^2 - y^2
        val2 = A2 - S2
        
        # val3 = x + y (since (x^2 - y^2) / (x - y) = x + y)
        val3 = val2 // val1
        
        # 3. Solve the system of linear equations:
        # x - y = val1
        # x + y = val3
        # Adding them gives 2x = val1 + val3
        x = (val1 + val3) // 2  # repeated number
        y = x - val1            # missing number
        
        return [x, y]