class Solution(object):
    def nextPermutation(self, num):

        n = len(num)

        sindex = -1

        for i in range( n-1, 0 , -1):

            if num [ i] > num[i - 1]:
                sindex = i-1

                break


        if sindex != -1:

            for i in range(n - 1, sindex, -1):

                if num[i] > num[sindex]:
                    num[sindex], num[i] = num[i], num[sindex]

                    break

        num[sindex + 1:] = sorted(num[sindex + 1:])

        return num

        