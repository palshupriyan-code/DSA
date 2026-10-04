class Solution(object):
    def climbStairs(self, n):
        if n <= 2:
            return n

        prev = 1
        prev1 = 2
        ways = 0 

        for i in range (3,n+1) :

            ways = prev + prev1
            prev = prev1
            prev1 = ways 

        return ways