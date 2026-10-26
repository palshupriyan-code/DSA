bool possible(vector <int> &bloomDay , int day , int m , int k ,int n ){
    int cnt = 0 ;
    int No_of_Bloom = 0 ; 

    for (int i = 0 ; i < n ; i++){

        if ( bloomDay[i] <= day){
            cnt ++;
        }

        else {
            No_of_Bloom += (cnt/k);
            cnt = 0 ;
        }

    }
    No_of_Bloom += (cnt/k) ; 

    return No_of_Bloom >=m ; 
}

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int mini = INT_MAX ; int maxi = INT_MIN ; 
        int n = bloomDay.size() ; 

        if (n < (long long) m*k){
            return -1 ; 
        }
        
        for (int i = 0  ; i < n ; i ++) {
            mini = min(bloomDay[i] , mini) ; 
            maxi = max(bloomDay[i] , maxi ) ; 
        }

        int low = mini ; int high = maxi ; 

        while (low <= high){
            int mid = low + (high - low ) / 2 ;

            if (possible(bloomDay , mid , m , k,n)){
                high = mid -1 ;
            }

            else {
                low = mid + 1 ; 

            }
        }
        return low ;
        }
    };