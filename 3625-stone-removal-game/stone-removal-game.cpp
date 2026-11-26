class Solution {
public:
    bool canAliceWin(int n) {
        int k = 1 ; int r = 10 ; 

        if (n-r<0){return false ;}

        while(n-r>=0 && r >0){
            n-=r ; k++ ; r-- ; 
        }

        if (k%2 == 0){ return true ;}

        return false ; 
    }
};