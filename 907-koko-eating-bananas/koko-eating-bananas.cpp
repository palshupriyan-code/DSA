int Maxm(vector <int> &piles){
    int n = piles.size() ; 
    int maxi = INT_MIN ; 
    for (int i = 0 ; i <n ; i ++){
        maxi = max(maxi , piles[ i ]) ; 
    }
    return maxi ; 
}

long long cal_hours (vector <int> &piles , int mid ){
    long long tot_hours = 0 ; 
    int n = piles.size() ; 

    for (int i = 0 ; i <n ; i ++ ){

        tot_hours += ceil((double) piles[i]/(double) mid) ; 
    }
    return tot_hours ; 
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ; int high = Maxm(piles) ; 
        int n = piles.size() ; 

        while (low <= high ){
            
            int mid = low + (high - low )/ 2 ; 

            if (n == h ){
                return high ;
            }

            if (cal_hours(piles , mid) <= h ){
                high = mid - 1 ; 
            }

            else {
                low = mid + 1 ; 

            }
        }
        return low ; 
    }
};