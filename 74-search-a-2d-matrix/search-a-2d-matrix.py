class Solution(object):
    def searchMatrix(self, matrix, target):
        low1 = 0  ; high1 = len(matrix ) - 1 

        while low1 <= high1 :
            mid1 = low1 + (high1 - low1) //2

            low2 = 0 ; high2 = len(matrix[0]) - 1 

            if matrix[mid1][low2] > target : 
                high1 = mid1 - 1

            elif matrix[mid1][high2 ] < target :
                low1 = mid1 + 1

            else :
                while low2 <= high2 :
                    mid2 = low2 + (high2 -low2) //2 

                    if matrix[ mid1][ mid2] == target:
                        return True

                    elif matrix[mid1][mid2] >= target :
                        high2 = mid2 - 1 

                    else :
                        low2 = mid2 + 1 
                    
                return False
                
        return False