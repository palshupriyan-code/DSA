class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l = 0 ; int r = 0 ; 
       int maxlen = INT_MIN ; 
       int cnt[256] = {0} ; int n = s.size();

       if (n==0){return 0 ; } 

       while(r<n){
        cnt[(unsigned char)s[r]]++ ; 

        while(cnt[(unsigned char)s[r]] > 1 ) {
            cnt[(unsigned char)s[l]]--;
            l++ ; 
        }

        maxlen = max(maxlen , r-l+1) ; 
        r++ ;

       }
       return maxlen ;  
    }
};