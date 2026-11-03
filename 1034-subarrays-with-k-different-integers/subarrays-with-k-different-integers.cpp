class Solution {
public:
    int atmostint(vector<int>& nums , int k ){
        int l = 0 ; int r = 0 ; 
        int n = nums.size() ; int count = 0 ;
        map <int, int > mpp ; 

        if (k<= 0 ){
            return 0 ; 
        }

        while(r< n ){
            mpp[nums[r]]++ ; 

            while (mpp.size()> k) {
                mpp[nums[l]]--;

                if (mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
            l++; 
            }
        count += r - l  + 1  ; 
        r++ ; 
        }
        return count ; 
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostint(nums, k) - atmostint(nums, k-1 ); 
    }
};