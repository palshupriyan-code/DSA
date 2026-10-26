class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n= nums.size();

        for (int i = 0 ; i < n ; i++ ){

            if ((i ==0 or nums[i] > nums[i-1]) && (i ==n-1 or nums[i]> nums[i+1])){
                                return i ;
            }
                }
                return -1; 
    }
};