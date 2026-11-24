class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 2;
        for (int l = 0; l < n; l++) {
            long long prod = 1, g = 0, lcm = 1;
            for (int r = l; r < n; r++) {
                long long x = nums[r];
                prod *= x;
                g = gcd(g, x);
                lcm = lcm * x / gcd(lcm, x);
                if (prod == g * lcm) {
                    ans = max(ans, r - l + 1);
                } else if (r - l + 1 >= 3) {
                    break;
                }
            }
        }
        return ans;
    }
};