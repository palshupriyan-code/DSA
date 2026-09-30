class Solution(object):
    def findMaxConsecutiveOnes(self, arr):
        cnt,maxm=0,0
        for i in range(len(arr)):
            if arr[i]==1:
                cnt+=1
                maxm=max(maxm,cnt)
            else:
                cnt=0
        return(maxm)

        