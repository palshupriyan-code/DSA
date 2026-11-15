class Solution {
public:
    bool check(string &s, int left, int right, int cnt) {
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            }
            else {
                cnt++;
                if (cnt >= 2) return false;  

                return check(s, left + 1, right, cnt) || check(s, left, right - 1, cnt);
                
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        return check(s, 0, s.size() - 1, 0);
    }
};