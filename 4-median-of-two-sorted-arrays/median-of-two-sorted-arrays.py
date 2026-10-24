class Solution(object):
    def findMedianSortedArrays(self, arr1, arr2):
        # i = 0 ; j = 0 
        # arr3 = []

        # while i < len(arr1) and j < len(arr2):
        #     if arr1[i] <= arr2[j]:
        #         arr3.append(arr1[i])
        #         i+=1

        #     else :
        #         arr3.append(arr2[j])
        #         j+=1

        # if j == len(arr2):
        #     arr3.extend(arr1[i:])

        # else:
        #     arr3.extend(arr2[j:])
                
        # n = len(arr3)
        
        # if n%2 == 1:
        #     median = n//2
        #     return arr3[median]
        # else:
        #     median = n//2
        #     return (arr3[median] + arr3[median - 1])/2.0
        arr3 = sorted(arr1 + arr2)
    
        n = len(arr3)
        if n % 2 == 1:
            return arr3[n // 2]
        else:
            mid = n // 2
            return (arr3[mid] + arr3[mid - 1]) / 2.0
        
 



