class Solution {
public:
    vector <int> NSE (vector <int> &arr){
        int n = arr.size();
        vector <int> nse(n) ; stack<int>st ;
        for (int i = n-1 ; i>=0 ; i--){

            while(!st.empty() && arr[st.top()]>= arr[i]){st.pop();}

            nse[i] = st.empty()? n : st.top() ;
            st.push(i); 
            }
            return nse ; 
        }
    
    vector<int> PSEE (vector<int> &arr){
        int n = arr.size();
        vector <int> psee(n) ; stack<int>st ;
        for (int i = 0 ; i<n ; i++){
            while(!st.empty() && arr[st.top()]> arr[i]){st.pop();}

            psee[i] = st.empty()? -1 : st.top() ;
            st.push(i); 
            }
            return psee ; 
        }

    int sumSubarrayMins(vector<int>& arr) {

        vector<int> nse = NSE (arr) ; 
        vector<int> psee = PSEE (arr);

        int n = arr.size() ;  int mod = int(1e9 +7 ) ; 
        long long tot = 0 ;

        for (int i = 0 ; i<n ; i++){
           long long left = i - psee[i] ; 
            long long right = nse[i] - i ;

            tot =(tot + left * right *arr[i])%mod ;
        }
        return (int)tot ; 
    }
};