class Solution(object):
    def maxArea(self, height):

        left , right = 0 ,len(height)-1

        max_water = 0

        while left<right :

            new_water = (min(height[left], height[right]))*(right - left)

            max_water = max(new_water , max_water)

            if height[left ] < height [right ] :
                    
                left += 1
                    
            else :

                right -= 1

        return max_water