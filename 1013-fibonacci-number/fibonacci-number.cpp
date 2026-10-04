class Solution {
public:
    int fib(int n) {
        if (n<=1) {
            return n ;
        } 

        int prev_1 = 0 ; int prev_2 = 1 ; 
        int current = 0 ;

        for (int i = 2 ; i<n+1 ; i++ ){
            current = prev_1 + prev_2 ;
            
            prev_1 = prev_2 ;

            prev_2 = current ; 
            }
        return current ;
        }
    };