class Solution(object):
    def merge(self, l1, m, l2, n):

        l1.extend(l2)

        if len(l1) > m+n :
            toRem = len(l1) - (m+ n )
            while toRem > 0 : 

                l1.remove(0 )
                toRem -= 1

        l1.sort()
        print(l1)
