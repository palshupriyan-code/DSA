class Solution(object):
    def fourSum(self, nums, target):

        nums.sort(); ans = []

        x = len(nums)

        for i in range (x) :

            if i > 0 and nums [ i ] == nums [i -  1 ] :
                continue

            for j in range(i +1 , x ) :

                if j != i + 1 and nums [j ] == nums [j - 1] :
                    continue

                k = j+1
                l = x-1

                while k < l :

                    sum1 =nums[i] + nums[j] + nums[ k ]+nums [ l ]

                    if sum1 == target :

                        temp = [nums [ i ] , nums[j ] , nums[ k ] , nums[l ]]

                        ans.append(temp)

                        k+=1 ; l-=1

                        while k < l and nums[ k ] == nums[k-1]:
                            k+=1

                        while k < l and nums[ l ]  == nums[l + 1]:
                            l -= 1

                    elif sum1 < target :

                        k+=1

                    else:

                        l-=1

        return ans