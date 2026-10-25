class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxmsum = 0 ; 
        int index = 0 ;

        for (int i = 0 ; i < mat.size() ; i ++) {
            
            int sum1 = accumulate(mat[i].begin() , mat[i].end() , 0 ) ;   

            if (sum1 > maxmsum) {

                maxmsum = sum1 ; 
                index = i ; 
            }
        }
        return { index , maxmsum } ;  
    }
};