class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
            int cnt = 0 ; int maxm = 0  ; 
    int n = size(arr) ; 

    for (int i = 0 ; i < n ; i++) {
        if (arr[i ] == 1 ) {
            cnt ++ ;
            maxm = max(maxm,cnt) ;
        }
        else{cnt = 0 ; }
        
    }
    
    return maxm;
}
        
};