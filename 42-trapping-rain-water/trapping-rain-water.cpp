class Solution
{
public:
    int trap(vector<int> &height){
        int l= 0 ; int n = height.size() ; int r = n-1 ; 
        int leftmax = 0 ; int rightmax = 0 ; 
        int tot = 0 ; 

        while(l<r){

            if(height[l]<= height[r]){
                leftmax= max(leftmax, height[l]);
                
                if (leftmax> height[l]){
                    tot+= leftmax - height[l] ; 
                }
                l++ ; 
            }

            else{

                rightmax= max(rightmax, height[r]);
                
                if (rightmax> height[r]){
                    tot+= rightmax - height[r] ; 
                }
                r-- ; 
            }
        }
        return tot ; 
    }
};