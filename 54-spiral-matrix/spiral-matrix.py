class Solution(object):
    def spiralOrder(self, m):

        top , left, right, bottom = 0, 0, len( m [0] ) - 1 , len ( m ) - 1 

        l = []

        while top <= bottom and left <= right:
            for i in range (left , right + 1):

                l.append(m[top] [ i])

            top += 1

            for i in range (top, bottom + 1) :

                l.append(m[i ][right ])

            right -= 1

            if top <= bottom :

                for i in range(right, left-1, -1):
                    l.append(m [ bottom  ] [ i])

                bottom -= 1
            if left <= right :
                    
                for i in range(bottom , top - 1 , -1):
                    l.append(m [ i] [left ])

                left +=1


        return(l)