class Solution(object):
    def maxArea(self, height):

        left , right = 0 ,len(height)-1

        max_water = (min ( height [ left]  , height[right ]))*( right - left )

        while left<right :

            new_water = (min(height[left], height[right]))*(right - left)

            if new_water > max_water :
                max_water = new_water

            if height[left ] < height [right ] :
                    
                left += 1
                    
            else :

                right -= 1

        return max_water