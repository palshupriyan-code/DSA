class Solution {
public:
    vector <int> NGE(vector<int> &nums){
        int n = nums.size();
        vector <int> nge(n) ; stack<int>st ;
        for (int i = n-1 ; i>=0 ; i--){

            while(!st.empty() && nums[st.top()] <= nums[i]){st.pop();}

            nge[i] = st.empty()? n : st.top() ;
            st.push(i); 
            }
            return nge ; 
        }

        vector<int> PGEE (vector<int> &nums){

        int n = nums.size();
        vector <int> pgee(n) ; stack<int>st ;
        for (int i = 0 ; i<n ; i++){
            while(!st.empty() && nums[st.top()]< nums[i]){st.pop();}

            pgee[i] = st.empty()? -1 : st.top() ;
            st.push(i); 
            }
            return pgee ; 
        }

        vector<int> NSE (vector<int> &nums){
        int n = nums.size();
        vector <int> nse(n) ; stack<int>st ;
        for (int i = n-1 ; i>=0 ; i--){

            while(!st.empty() && nums[st.top()]>= nums[i]){st.pop();}

            nse[i] = st.empty()? n : st.top() ;
            st.push(i); 
            }
            return nse ; 
        }
    
    vector<int> PSEE (vector<int> &nums){
        int n = nums.size();
        vector <int> psee(n) ; stack<int>st ;
        for (int i = 0 ; i<n ; i++){
            while(!st.empty() && nums[st.top()]> nums[i]){st.pop();}

            psee[i] = st.empty()? -1 : st.top() ;
            st.push(i); 
            }
            return psee ; 
        }

    long long subArrayRanges(vector<int> &nums) {

        vector<int> psee = PSEE(nums) ; vector<int> pgee = PGEE(nums) ; 
        vector<int> nse =  NSE(nums) ;  vector<int> nge = NGE(nums) ; 

        long long min_tot = 0 ; long long max_tot = 0 ;

        int n = nums.size() ; 

        for (int i = 0 ; i<n ; i++){

           long long min_left = i - psee[i] ; long long min_right = nse[i] - i ;
           min_tot =(min_tot + min_left * min_right *nums[i]) ;

           long long max_left = i - pgee[i] ; long long max_right = nge[i] - i ; 
           max_tot = max_tot + max_left * max_right * nums[i] ; 
        }

        return max_tot - min_tot ;  
    }
};
