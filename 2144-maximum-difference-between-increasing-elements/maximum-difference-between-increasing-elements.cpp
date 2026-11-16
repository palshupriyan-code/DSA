class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int pre = 0 ; int r = 1 ; int n = nums.size() ; 
        int maxm = -1 ; 

        while(r<n){
            if (nums[pre] >= nums[r]){
                pre = r ; 
                r++ ; 
            }

            else{
                int diff = nums[r] - nums[pre] ; 
                maxm = max(maxm , diff) ; 
                r++ ; 
            }
        }
        return maxm ; 
    }
};