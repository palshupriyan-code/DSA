class Solution(object):
    def sortColors(self, arr):
        
        s0=arr.count(0)
        s1=arr.count(1)
        s2=arr.count(2)
        for i in range(0,s0):
            arr[i]=0
        for i in range(s0,s0+s1):
            arr[i]=1
        for i in range(s0+s1,s0+s1+s2):
            arr[i]=2
        return arr 