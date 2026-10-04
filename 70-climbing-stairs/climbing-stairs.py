class Solution(object):
    def climbStairs(self, n):
        if n <= 2:
            ways = n

        prev = 0
        prev1 = 1
        current = 0 

        for i in range (n) :

            current = prev + prev1
            prev = prev1
            prev1 = current 

        return current