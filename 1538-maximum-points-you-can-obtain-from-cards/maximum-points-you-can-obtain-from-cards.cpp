class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {

        int lsum = 0 ; int rsum = 0 ;
        for(int i = 0 ; i< k ; i ++){

            lsum += cardpoints[i] ; 
        }
        int maxsum = lsum ; 
        int rindex = cardpoints.size() - 1 ;  

        for (int i = k-1 ; i>=0 ; i--){

            lsum -= cardpoints[i] ; 
            rsum += cardpoints[rindex] ; 
            rindex -- ; 
            maxsum = max(maxsum, lsum + rsum );
        }
        return maxsum ; 
    }
};