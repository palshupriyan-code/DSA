class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int , int > mpp ;

        int l = 0 ; int r = 0 ; 
        int maxlen = 0 ; 

        int n = fruits.size() ;

        while(r < n ) {
            mpp[fruits[r]]++ ; 

            if (mpp.size() > 2 ){
                mpp[fruits[l]]-- ;
                
                if(mpp[fruits[l]]==0 ){
                    mpp.erase(fruits[l]) ;
                }
                l++ ;
            }
            else{
                maxlen=max(maxlen , r-l +1);
            }
            r++ ;
        }
        return maxlen ; 
    }
};