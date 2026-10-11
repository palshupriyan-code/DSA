int FirstOccu(vector<int> &arr , int target){
    int n = arr.size() ;
    int low , high , mid ;

    low = 0 ; high = n-1 ; 

    int first =-1 ;

    while (low <= high){

        mid = (low + high )/2 ; 

        if (target == arr[mid ]){

            first = mid ;
            high = mid - 1;

        }

        else if (target < arr[mid ]){
            high = mid - 1 ;

        }
        else {
            low = mid +1 ;
        }
    }
    return first ;
}

int LastOccu(vector <int> &arr ,  int target){
        int n = arr.size() ;
    int low , high , mid ;
    int last = -1 ;
    low = 0 ; high = n-1 ; 

    while (low <= high ){
        mid = (low + high) / 2 ; 
        if (target == arr[mid ]){

            last = mid ;
            low = mid + 1;
            }
        else if (target < arr[mid ]){
            high = mid - 1 ;
            }
        
        else {
            low = mid +1 ;
            }
        }

        return last;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {

        int first = FirstOccu(arr , target);
        if ( first == -1 ) return {-1,-1} ; 
        
        int last = LastOccu(arr , target) ;

        return {first , last} ;
        
    }
};