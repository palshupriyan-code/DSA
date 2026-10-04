class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n = size(arr) ; 
        set<int> myset (arr.begin(),arr.end()) ;
        int n1 = size(myset)  ; 
        return n != n1 ;
    }
    };