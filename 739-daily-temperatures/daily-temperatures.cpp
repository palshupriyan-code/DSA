class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> warmth ; stack<int> st; 
        int n = temperatures.size() ;

        for (int i = n-1 ; i>=0 ; i--){
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop() ;
            }

            if(st.empty()){warmth.push_back(0) ; }

            else{
                int day = st.top() - i ; 
                warmth.push_back(day) ; 
            }

            st.push(i);
        }
        reverse(warmth.begin() , warmth.end()); 

        return warmth ; 
    }
};