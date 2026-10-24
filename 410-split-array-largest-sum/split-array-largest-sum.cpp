class Solution {
public:
int Dist(vector <int> &num , int mid ){
            int rsum = 0  ; int cnt = 1 ;

            for (int i = 0 ; i < num.size() ; i++){

                if (rsum + num[i] <= mid){

                    rsum += num[i] ; 
                }

                else{

                    rsum = num[i] ; 
                    cnt ++ ; 
                }
            } 
                return cnt ; 
        }
    int splitArray(vector<int>& num, int k) {

        int n = num.size() ; 
        int low = *max_element(num.begin(), num.end()) ;  int high = accumulate(num.begin(), num.end(),0) ; 
        while (low <= high){
            int mid = low + (high - low) /2 ; 

            if (Dist(num , mid) <=k  ){
                high = mid - 1 ;
            }

            else {
                low = mid + 1 ; 
            }
        }
        return low ;
        
    }
};
