class Solution(object):
    def findMedianSortedArrays(self, arr1, arr2):
        i = 0 ; j = 0 
        arr3 = []

        while i < len(arr1) and j < len(arr2):
            if arr1[i] <= arr2[j]:
                arr3.append(arr1[i])
                i+=1

            else :
                arr3.append(arr2[j])
                j+=1

        if j == len(arr2) :
            for k in range(i, len(arr1)):
                arr3.append(arr1[k])

        else:
            for k in range(j, len(arr2)):
                arr3.append(arr2[k])
        
        n = len(arr3)
        
        if n%2 == 1:
            median = n//2
            return arr3[median]
        else:
            median = n//2
            return (arr3[median] + arr3[median - 1])/2.0
        
 



