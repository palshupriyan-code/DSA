class Solution(object):
    def rotate(self, arr, d):
        d=d%len(arr)
        arr[:]=arr[-d:]+arr[:-d]