class Solution{
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), m = nums2.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (nums2[j] != nums1[i]) j++;
        int res = -1;
        for (int k = j + 1; k < m; k++) {
            if (nums2[k] > nums1[i]) { res = nums2[k]; break; }
        }
        ans.push_back(res);
    }
    return ans;
}
};