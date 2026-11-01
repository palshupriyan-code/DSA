class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 ; int r = 0 ; int n = s.size();
        int maxlen = 0 ; 
        int maxfreq = 0 ;
        vector<int> hash(26) ;

        while (r< n) {
            hash[s[r] - 'A'] ++ ;
            maxfreq = max(maxfreq , hash[s[r]- 'A']) ;
            int change = r-l+1 - maxfreq ; 

            if (change > k ){
                hash[s[l] - 'A']--;
                l++ ; 
            }
            else{
                maxlen = max(maxlen , r- l + 1 ) ;
            }
            r++ ; 
        }
        return maxlen ; 
    }
};