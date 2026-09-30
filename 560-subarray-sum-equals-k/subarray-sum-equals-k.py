class Solution(object):
    def subarraySum(self, arr, k):

        cnt = 0
        presum = 0 
        hash = {0 : 1}

        for i in range (len(arr)):

            presum += arr[i ] 

            cnt += hash.get(presum - k, 0 )
            hash[presum] = hash.get(presum , 0 ) + 1

        return cnt