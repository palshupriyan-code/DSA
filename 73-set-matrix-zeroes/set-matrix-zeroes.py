class Solution(object):
    def setZeroes(self, matrix):
        row = [0] * len(matrix[0])
        col = [ 0 ] * len(matrix)


        for i in range(len(matrix)):

            for j in range (len(matrix[0])):

                if matrix [i ][ j ] == 0 :

                    col[i] = 1
                    row [ j] = 1

        for i in range (len(matrix)):

            for j in range (len(matrix[0])):

                if col [i ] or row [ j ] == 1:

                    matrix [ i ][j ] = 0  


        return matrix

