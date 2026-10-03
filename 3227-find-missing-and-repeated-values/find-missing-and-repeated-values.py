class Solution(object):
    def findMissingAndRepeatedValues(self, nums):

        n = len(nums)
        hash = {}
        l = []

        for i in range (n) : 
            for j in range(n ) :

                hash[nums[i][j]] = hash.get(nums[i][j],0) + 1

        for i in range (1,n**2 + 1 ):

            if hash.get(i,0) == 2:
                rep = i

            elif hash.get(i,0) == 0 :
                miss = i 

        return [rep , miss]