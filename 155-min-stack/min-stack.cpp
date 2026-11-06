class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        mini =LLONG_MAX ;  
    }

  void push(int value) {
    if (st.empty()){
        mini = value ; 
        st.push(value) ; 
        }

    else{

        if (value > mini){st.push(value) ; }

        else{
            st.push(2LL*value - mini);
            mini = value ; 
        }
    }
  }

  void pop() {
    if (st.empty()){return ;}
    else{
        long long x = st.top() ; 
        st.pop() ; 

        if (x < mini){
            mini = 2*mini - x ; 
        }
    }
  }

  int top() {
    if (st.empty()){return -1 ;}
   long long x= st.top() ; 

    if (x> mini) {return x ; }
    return mini ; 
  }

  int getMin() {
    return mini ; 
  }
};