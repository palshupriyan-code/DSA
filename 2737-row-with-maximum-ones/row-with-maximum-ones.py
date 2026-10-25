class Solution(object):
    def rowAndMaximumOnes(self, mat):
        counts = {}

        for i in range (len(mat)):

            counts[i] = 0
            for j in range(len(mat[0])):

                if mat[i][j] == 1:
                    counts[i] +=1

        row = max(counts, key=counts.get)

        return ([row, counts[row]]) 
