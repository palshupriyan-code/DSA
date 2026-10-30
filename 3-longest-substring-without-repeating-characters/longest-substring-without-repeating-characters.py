class Solution(object):
    def lengthOfLongestSubstring(self, s):
        l = r= maxlen = 0 
        last = [-1]*256

        n = len (s)

        while r < n :
            c= ord(s[r])
            
            if last[c] != -1 and last[c]>=l :
                l = last[c] +1
            

            last[c] = r 
            maxlen = max(maxlen , r - l +1 )
            r+=1
        return maxlen 
        
        