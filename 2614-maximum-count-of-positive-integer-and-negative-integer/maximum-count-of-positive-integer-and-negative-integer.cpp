class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size() ; int pos = 0 ; int neg = 0 ;

        for(int x : nums ){
            if (x< 0){
                neg++ ;
            }
            else if (x>0){
                pos++ ;
            }
            else{continue ; }
        }        
        return max(neg , pos) ; 
    }
};