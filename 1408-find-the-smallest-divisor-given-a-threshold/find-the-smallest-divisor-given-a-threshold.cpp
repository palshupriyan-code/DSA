class Solution {
public:
     
     int sumdiv(vector<int> & nums ,int mid , int n ){
        int sum = 0 ; 
        for (int x : nums) {
            sum += (x + mid - 1) / mid;   
        }
        return sum ; 
     }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size() ; 
        int low = 1 ; int high = *max_element(nums.begin(), nums.end()) ;

        while(low<=high){

            int mid = low + (high - low )/2 ;

            if (sumdiv(nums , mid , n ) <= threshold){
                high = mid -1 ;
            }
            else{
                low= mid + 1; 
            }
        }
        return low ; 
    }
};