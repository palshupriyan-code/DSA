class Solution{
public:
    vector<int> asteroidCollision(vector<int> &asteroids){
      stack <int> st ; 
      int n = asteroids.size() ; 

      for (int i = 0  ; i< n  ; i++){

        if(asteroids[i] > 0 ){st.push(asteroids[i]) ; }

        else{
            while(!st.empty() && abs(asteroids[i]) > st.top() && st.top() > 0 ){
                st.pop();
            }

            if (st.empty() || st.top()< 0 ){st.push(asteroids[i]);}

            else if(st.top()==abs(asteroids[i])){st.pop(); }

        }
      }

        int m = st.size() ;  vector <int> rem(m,0) ;

        for (int i = m-1 ; i>=0  ; i--){
            rem[i] = st.top() ; st.pop() ; 
        }

        return rem ; 
    }
};