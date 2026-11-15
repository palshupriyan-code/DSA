class Solution {
public:
    int can(vector<int> &prices , int mid , int k){
        int last = prices[0] ; int cnt = 1 ; 
        for(int i : prices){
            if (i - last >= mid){
                last = i ; 
                cnt++ ;
            }
        }
        return cnt >= k ; 
    }

    int maximumTastiness(vector<int>& prices, int k) {
        sort(prices.begin() , prices.end()) ; 
        int n = prices.size() ; 

        int low = 0 ; int high = *max_element(prices.begin() , prices.end()); 
        
        while(low <= high){
            int mid = low +(high - low)/2 ; 

            if(can(prices , mid , k)){
                low =mid+1 ; 
            }

            else{high = mid - 1 ;}
        }
        return high ; 
    }
};