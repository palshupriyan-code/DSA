class Solution(object):
    def productExceptSelf(self, num):
        z0= num.count(0)
        n= len(num)

        if z0 > 1:
            num = n * [ 0 ]
            
        elif z0 == 1:

            mult = 1 
            for x in num :

                if x != 0:
                        
                    mult = x * mult

            num = [mult if x ==0 else 0 for x in num ]
        else :
            mult = 1
            for i in range(n):
                mult = mult * num[i]
            num = [mult // x for x in num]  
            
        return num
