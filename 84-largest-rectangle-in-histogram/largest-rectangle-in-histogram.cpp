class Solution {
public:

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
    
    int largestRectangleArea(vector<int> &nums) {

        int maxarea = 0 ; int area = 0 ; 
        vector <int> nse = NSE(nums) ; vector <int> pse = PSEE(nums) ; 

        int n = nums.size() ; 

        for (int i = 0 ; i<n ; i++){
            
            area = (abs(nse[i] - pse [ i ] ) - 1) * nums[ i ] ; 
            maxarea = max(maxarea , area ) ; 
        }
    
     return maxarea ; 
     
    }
};