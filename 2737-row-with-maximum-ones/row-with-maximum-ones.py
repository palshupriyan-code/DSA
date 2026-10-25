class Solution(object):
    def rowAndMaximumOnes(self, mat):
        maxmsum = 0 
        index = 0 

        for i in range(len(mat)):
            sum1 = sum(mat[i])

            if sum1 > maxmsum :
                maxmsum = sum1
                index = i 

        return [index,maxmsum]
