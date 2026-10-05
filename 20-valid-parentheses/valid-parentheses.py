class Solution(object):
    def isValid(self, s):
        n = len(s)
        j = n-1
        stack = []
        isValid= True

        for i in range (n) :

            if s[i] == "{" or s[i]=="(" or s[i] =="[" :
                stack.append(s[i])

            else :
                if not stack :
                    return False

                if s[i]=="}":
                    if stack.pop() =="{" :
                        continue
                    else:
                        isValid = False
                        break

                elif s[i]==")":
                    if stack.pop() =="(" :
                        continue

                    else:
                        isValid = False
                        break

                else:
                    if stack.pop() =="[" :
                        continue
                    else:
                        isValid = False
                        break
            
        if isValid is True and len(stack) ==0  :
            return True
        else:
            return False