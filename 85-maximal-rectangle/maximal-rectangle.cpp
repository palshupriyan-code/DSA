class Solution
{
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
    
    int maximalRectangle(vector<vector<char>> &nums) {
        if (nums.empty() || nums[0].empty()) return 0;
        int n = nums.size(), m = nums[0].size();
        vector<vector<int>> psum(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i][j] == '0') sum = 0;
                else sum++;
                psum[i][j] = sum;
            }
        }

        int maxarea = 0;
        for (int i = 0; i < n; i++)
            maxarea = max(maxarea, largestRectangleArea(psum[i]));
        return maxarea;
    }
};