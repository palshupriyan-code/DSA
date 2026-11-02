class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0 ; int r = 0 ; 
        int n = s.size() ; vector<int> lastseen = {-1,-1,-1} ; 
        int count = 0 ; 

        for (int i = 0 ; i < n ; i ++){
            lastseen[s[i] - 'a'] = i ; 

            count = count + min({lastseen[0] , lastseen[1], lastseen[2]}) + 1 ;
            }
        return count ; 
        }
    };