class Solution {
public:
    void sortColors(vector<int>& arr) {
            int left , right , mid;
    left = 0 ; right = arr.size() - 1  ; mid = 0 ;


    while (mid <= right) {
        if (arr [ mid] == 0 ){
            swap(arr[left] , arr[mid]) ; 
            left ++ ; 
            mid ++ ;
        }

        else if (arr [ mid ] == 1 ){
            mid ++ ; 


        }
        else {
            swap(arr[mid],arr[right]) ;
            right -- ; 

        }
    }
    }
};