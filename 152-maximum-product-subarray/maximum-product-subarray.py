class Solution(object):
    def maxProduct(self, num):
        n = len(num)
        maxmul = float("-inf")

        prefix = 1 ; suffix = 1 

        for i in range (n) :

            if prefix ==0 :
                prefix = 1 

            elif suffix == 0 :
                suffix = 1 

            prefix = prefix * num [ i ]
            suffix = suffix * num [ n - i - 1 ] 

            maxmul = max (maxmul , max(prefix , suffix) )


        return maxmul