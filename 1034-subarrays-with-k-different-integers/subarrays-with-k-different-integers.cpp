class Solution {
public:
int atmostint(vector<int>& nums, int k) {
    if (k <= 0) return 0;

    int n = nums.size();
    vector<int> freq(n + 1, 0);      
    int l = 0, distinct = 0, count = 0;

    for (int r = 0; r < n; r++) {
        if (freq[nums[r]]++ == 0) distinct++;     

        while (distinct > k) {
            if (--freq[nums[l]] == 0) distinct--; 
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