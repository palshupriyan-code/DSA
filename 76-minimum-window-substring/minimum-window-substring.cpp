class Solution {
public:
    string minWindow(string s, string t) {

        int l = 0 ; int r =0 ; 
        int count = 0 ; int minlen = INT_MAX ; int sInd = -1 ; 
        int n = s.size() ; int m = t.size(); 

        vector<int> hash(256,0) ; 

        for(int i = 0 ; i< m ; i++){
            hash[t[i]]++ ; 
        }

        while(r<n){
            if (hash[s[r]]> 0 ){
                count ++ ; 
            }
            hash[s[r]]--;

            while(count == m ){

                if(r - l + 1 < minlen){
                    minlen = r - l + 1 ; 
                    sInd = l ; 
                }
                hash[s[l]]++ ;

                if(hash[s[l]]>0 ){
                    count-- ; 
                }
                l++ ; 
            }
            r++; 
        }
        if (sInd==-1){return "" ;}
        return s.substr(sInd, minlen) ;   
    }
};