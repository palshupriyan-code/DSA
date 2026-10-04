class Solution {
public:
    int climbStairs(int n) {
        if (n<= 2) {
            return n ;
        }
        int prev = 1 ; int prev1 = 2; int ways = 0 ; 

        for (int i = 3 ; i<= n ; i ++ ){
            ways = prev + prev1 ;
            prev = prev1 ;
            prev1 = ways ;
        }

        return ways ;
    }
};