def merge_sort(arr,low,high):
    cnt = 0 
    if low>=high:
        return cnt
    
    mid=(low+high)//2


    cnt +=merge_sort(arr,low,mid)

    cnt +=merge_sort(arr,mid+1,high)
    cnt += countpair(arr,low,mid,high)

    merge(arr,low,mid,high)

    return cnt
def countpair(arr,low,mid,high) :
    right = mid + 1 
    cnt = 0 

    for i in range (low,mid+1) :
        while right <= high and arr [i] > 2* arr[right] :
            right +=1
        cnt += right - mid - 1

    return cnt 


def merge(arr,low,mid,high):
 

    temp = [] ; left = low ; right = mid + 1

    while left <= mid and right <= high:

        if arr[left] <= arr[right]:

            temp.append(arr[left])
            left+=1

        else:

            temp.append(arr[right])
            right+=1

    while left <= mid:

        temp.append(arr[left])
        left+=1

    while right <= high:

        temp.append(arr[right])
        right+=1

    for i in range(low,high+1):
        arr[ i ]= temp[ i - low ]
    


class Solution(object):
    def reversePairs(self, arr):
        n = len(arr)
        return merge_sort(arr,0,n-1)

