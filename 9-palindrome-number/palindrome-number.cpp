class Solution {
public:
    bool isPalindrome(int x) {
    string forw = to_string(x) ;

    string rev(forw.rbegin() ,forw.rend() ) ; 

    return forw == rev ;
    }
};