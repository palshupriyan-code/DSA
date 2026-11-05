class Solution(object):
    def isValid(self, s):
        n= len(s)
        stack = []
        isValid= True

        for i in range (n) :

            if s[i] == "{" or s[i]=="(" or s[i] =="[" :
                stack.append(s[i])

            else :
                if not stack :
                    return False 

                if s[i]=="}" and stack.pop() =="{" :
                    continue

                elif s[i]==")" and stack.pop() =="(" :
                    continue

                elif s[i]=="]" and  stack.pop() =="[" :
                    continue

                else:
                    return False
                    
        if isValid is True and len(stack) ==0  :
            return True
        else:
            return False
