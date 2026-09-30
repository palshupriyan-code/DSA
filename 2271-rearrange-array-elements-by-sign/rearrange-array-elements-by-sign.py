class Solution(object):
    def rearrangeArray(self, arr):
        n= len(arr)

        ans=[0]*n
        posi=0 ; neg= 1
        for i in range(n):

            if arr[i] < 0:

                ans[neg] = arr[i]
                neg+=2

            else: 
                ans[posi]  = arr[i ]
                posi+=2

        return(ans)