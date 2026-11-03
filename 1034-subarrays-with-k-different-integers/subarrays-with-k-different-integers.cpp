class Solution {
public:
//     int atmostint(vector<int>& nums , int k ){
//         int l = 0 ; int r = 0 ; 
//         int n = nums.size() ; int count = 0 ;
//         map <int, int > mpp ; 

//         if (k<= 0 ){
//             return 0 ; 
//         }

//         while(r< n ){
//             mpp[nums[r]]++ ; 

//             while (mpp.size()> k) {
//                 mpp[nums[l]]--;

//                 if (mpp[nums[l]]==0){
//                     mpp.erase(nums[l]);
//                 }
//             l++; 
//             }
//         count += r - l  + 1  ; 
//         r++ ; 
//         }
//         return count ; 
//     }


int atmostint(vector<int>& nums, int k) {
    if (k <= 0) return 0;

    int n = nums.size();
    vector<int> freq(n + 1, 0);      // freq[v] = how many times v is in the window
    int l = 0, distinct = 0, count = 0;

    for (int r = 0; r < n; r++) {
        if (freq[nums[r]]++ == 0) distinct++;     // a new distinct value entered

        while (distinct > k) {
            if (--freq[nums[l]] == 0) distinct--; // a value fully left the window
            l++;
        }
        count += r - l + 1;
    }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostint(nums, k) - atmostint(nums, k-1 ); 
    }
};