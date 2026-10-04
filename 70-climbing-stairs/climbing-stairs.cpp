class Solution {
public:
    int climbStairs(int n) {
        if (n<= 2) {
            return n ;
        }
        int prev = 0 ; int prev1 = 1; int current = 0 ; 

        for (int i =0 ; i< n ; i ++ ){
            current = prev + prev1 ;
            prev = prev1 ;
            prev1 = current ;
        }

        return current ;
    }
};