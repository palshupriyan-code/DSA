class Solution {
public:
    int MaxEle(vector<vector<int>>& mat , int n ,int  m , int mid){
        int maxele= -1 ;
        int index = -1 ;

        for (int i = 0 ; i < n ; i++) {
            if (mat[i][mid] > maxele){
                maxele = mat[i][mid] ; 
                index = i ; 
            }
        }
        return index ; 
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size() ; 
        int m = mat[0].size() ; 

        int low = 0 ; int high = m -1 ; 
        while (low <= high ) {
            int mid = low +(high - low ) / 2 ; 
            int maxrowindex = MaxEle(mat , n , m , mid) ; 

            int left = -1 ; int right = -1;

            if (mid - 1 >= 0 ){
                left = mat[maxrowindex][ mid-1 ] ; 
            }  

            if (mid +1 < m){
                right = mat[maxrowindex][mid +1] ; 
            }

            if ((mat[maxrowindex][mid] > left) &&(mat[maxrowindex][mid] > right)){
                return {maxrowindex , mid} ; 

            }

            else if (mat[maxrowindex][mid] < left ){
                high = mid -1 ;
            }

            else{
                low = mid + 1; 
            }

        }
        return {-1,-1} ; 
    }
};