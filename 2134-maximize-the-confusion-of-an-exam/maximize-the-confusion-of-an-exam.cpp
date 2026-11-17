class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0 ; int r = 0 ; int n = answerKey.size();
        int maxlen = 0 ; 
        int maxfreq = 0 ;
        vector<int> freq(26) ;

        while (r< n) {
            freq[answerKey[r] - 'A'] ++ ;
            maxfreq = max(maxfreq , freq[answerKey[r]- 'A']) ;
            int change = r-l+1 - maxfreq ; 

            if (change > k ){
                freq[answerKey[l] - 'A']--;
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