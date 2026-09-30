class Solution(object):
    def longestConsecutive(self, num):

        longest = 1
        cnt = 0
        lastnum = float("-inf")
        num.sort()

        if len(num) == 0 :
            
            longest = 0

        else :

            for i in range(len(num)):

                    if num [ i ] - 1 == lastnum :

                        cnt += 1
                        lastnum = num [ i ]

                    elif num [i ] != lastnum :

                        cnt = 1 
                        lastnum = num [ i ]

                    longest = max(longest, cnt )


        return longest