class Solution(object):
    def countDaysTogether(self, arriveAlice, leaveAlice, arriveBob, leaveBob):
        AA = [int(x) for x in arriveAlice.split("-")]
        LA = [int(x) for x in leaveAlice.split("-")]
        AB = [int(x) for x in arriveBob.split("-")]
        LB = [int(x) for x in leaveBob.split("-")]

        start = max(AA, AB)
        end   = min(LA, LB)

        daysmonth = 0

        days = [31,28,31,30,31,30,31,31,30,31,30,31]

        if start > end :
            return 0 

        else: 
            for i in range(start[0]-1 , end[0] -1 ) :
                daysmonth +=days[i] 

        totdaymet = daysmonth - start[1] + end[1 ] +1

        return totdaymet
